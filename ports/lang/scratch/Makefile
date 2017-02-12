# $FreeBSD$

PORTNAME=	scratch
PORTVERSION=	1.4.0.7
CATEGORIES=	lang
MASTER_SITES=	http://download.scratch.mit.edu/
DISTNAME=	${PORTNAME}-${PORTVERSION}.src

MAINTAINER=	takeshi.mutoh@gmail.com
COMMENT=	Scratch programing language

LICENSE=	GPLv2

BUILD_DEPENDS=	v4l_compat:multimedia/v4l_compat
RUN_DEPENDS=	squeak:lang/squeak
LIB_DEPENDS=	libpango-1.0.so:x11-toolkits/pango \
		libv4l2.so:multimedia/v4l_compat

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}.src

SC_DIR=		${PREFIX}/share/scratch

post-patch:
	@${REINPLACE_CMD} -e 's,%%SC_DIR%%,${SC_DIR},' -e 's,%%PREFIX%%,${PREFIX},' ${WRKSRC}/src/scratch

do-install:
	${MKDIR} ${STAGEDIR}${SC_DIR}/Plugins
.for p in Unicode Scratch Camera
	${INSTALL_DATA} ${WRKSRC}/Plugins/so.${p}Plugin ${STAGEDIR}${SC_DIR}/Plugins/
.endfor
.for f in Help locale Media Projects Scratch.image Scratch.ini \
	LICENSE gpl-2.0.txt
	${CP} -r ${WRKSRC}/$f ${STAGEDIR}${SC_DIR}/$f
.endfor
	${FIND} ${STAGEDIR}${SC_DIR} -type d -exec ${CHMOD} 755 {} ';'
	${FIND} ${STAGEDIR}${SC_DIR} -type f -exec ${CHMOD} 444 {} ';'
	${INSTALL_SCRIPT} ${WRKSRC}/src/scratch ${STAGEDIR}${PREFIX}/bin/scratch
	${INSTALL_MAN} ${WRKSRC}/src/man/scratch.1.gz ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>

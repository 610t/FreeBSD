# $FreeBSD$

PORTNAME=	iP6
PORTVERSION=	0.6.4
CATEGORIES=	emulators
MASTER_SITES=	http://www.retropc.net/isio/ip6/
DISTNAME=	ip6-${PORTVERSION}

MAINTAINER=	takeshi.mutoh@gmail.com
COMMENT=	TheiP6: NEC PC-6001 family emulators

LICENSE=	BSD

WRKSRC=		${WRKDIR}/iP6-${PORTVERSION}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/iP6 ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>

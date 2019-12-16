/** @returns {Map<string, string>} */
export function getGetParams() {
    const search = location.search.slice(1);
    const getParams = new Map();

    if (!search) {
        return getParams;
    }

    search.split('&').forEach((item) => {
        const [key, val] = item.split('=', 2);
        getParams.set(key, decodeURI(val));
    });

    return getParams;
}

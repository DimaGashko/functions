/**
 * Returns the object of GET parameters
 * 
 * Return object format:
 * {
 *    promName: value,
 * }
 */
export default function getGETParams() {
    var search = location.search.slice(1);
    var result = {};

    if (!search) return result;

    search.split('&').forEach(function (item) {
        var component = item.split('=', 2);
        result[component[0]] = decodeURI(component[1]);
    });

    return result;
}

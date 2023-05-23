/**
 * @param {Array} arr
 * @return {Matrix}
 */
const jsonToMatrix = function(arr) {

  const isObject = x => (x !== null && typeof x === 'object');

  const getKeys = object => {
    if (!isObject(object)) return ['']; 
    const result = [];
    for (const key of Object.keys(object)) {
      const childKeys = getKeys(object[key]); 
      for (const childKey of childKeys) {
        result.push(childKey ? `${key}.${childKey}` : key); 
      }
    }
    return result;
  };

  const keys = Array.from(new Set(arr.reduce((acc, curr) => {
    getKeys(curr).forEach(k => acc.add(k));
    return acc;
  }, new Set()))).sort();


  const getValue = (obj, path) => {
    const paths = path.split('.');
    let i = 0;
    let value = obj;
    while (i < paths.length && isObject(value)) {
      value = value[paths[i++]];
    }

    return i < paths.length || isObject(value) || value === undefined ? '' : value;
  };

  const matrix = [keys];
  arr.forEach(obj => {
    matrix.push(keys.map(key => getValue(obj, key)));
  });

  return matrix;
};
def flatten_dictionary_helper(initialKey, dictionary, result):
  for key in dictionary:
    value = dictionary[key]
    if type(value) is not dict:
      if (initialKey == "" or initialKey == None):
        result[key] = value
      else:
        result[initialKey + "." + key] = value
    else: #if type is dict
      if (initialKey == "" or initialKey == None):
        flatten_dictionary_helper(key, value, result)
      else:
        flatten_dictionary_helper(initialKey + "." + key, value, result)


def flatten_dictionary(dictionary):
  result = {}
  flatten_dictionary_helper("", dictionary, result)
  return result
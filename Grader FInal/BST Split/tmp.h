#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT>
CP::map_bst<KeyT, MappedT, CompareT> CP::map_bst<KeyT, MappedT, CompareT>::split(KeyT val)
{
  // your code here
  CP::map_bst<KeyT, MappedT, CompareT> result;

  node *i = mRoot;
  node *j = NULL;
  node *k = NULL;

  bool _setRoot = false;
  while (i != NULL)
  {
    // >=
    std::cout << i->data.first << " " << i->data.second << " " << ((j == NULL) ? 0 : j->data.first) << " " << ((k == NULL) ? 0 : k->data.first) << "\n";
    if (compare(val, i->data.first) <= 0)
    {
      if (j == NULL)
      {
        result.mRoot = i;
        if (result.mRoot->parent != NULL)
        {
          result.mRoot->parent->right = NULL;
          result.mRoot->parent = NULL;
        }
        j = result.mRoot;
      }
      else
      {
        j->left = i;
        j->left->parent = j;
        j = j->left;
      }
      i = i->left;
      if (i != NULL)
      {
        i->parent = NULL;
        j->left = NULL;
      }
    }
    // <
    else
    {
      if (k == NULL)
      {
        _setRoot = true;
        mRoot = i;
      }
      else
      {
        k->right = i;
        i->parent = k;
      }

      k = i;
      i = i->right;
      if (i != NULL)
      {
        i->parent = NULL;
        k->right = NULL;
      }
    }
  }
  if (!_setRoot)
    mRoot = NULL;
  return result;
}

#endif

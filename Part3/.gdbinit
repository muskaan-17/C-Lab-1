define p_generic_list
  set var $n = $arg0
  while $n
    print *$n
    set var $n = $n->next
  end
end

document p_generic_list
  p_generic_list LIST_HEAD_POINTER
  Print all nodes starting from LIST_HEAD_POINTER (expects a 'next' field).
end

define p_list_eq5
  set var $n = $arg0
  while $n
    if $n->data == 5
      print *$n
    end
    set var $n = $n->next
  end
end

document p_list_eq5
  p_list_eq5 LIST_HEAD_POINTER
  Print only nodes with data == 5.
end


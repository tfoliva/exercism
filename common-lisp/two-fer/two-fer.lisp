(in-package #:cl-user)
(defpackage #:two-fer
  (:use #:cl)
  (:export #:twofer))
(in-package #:two-fer)

(defun twofer (name)
  (if (name == NIL)
    ((format t "One for you, one for me.")
    (format t "One for ~s, one for me." name)
  )
)

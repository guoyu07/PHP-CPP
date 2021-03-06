/**
 *  phpcpp.h
 *
 *  Library to build PHP extensions with CPP
 * 
 *  @copyright 2013 CopernicA BV
 *  @author Emiel Bruijntjes <emiel.bruijntjes@copernica.com>
 */

#ifndef PHPCPP_H
#define PHPCPP_H

/**
 *  Other C and C++ libraries that PhpCpp depends on
 */
#include <string.h>
#include <string>
#include <initializer_list>
#include <vector>
#include <memory>
#include <list>
#include <exception>
#include <map>

/**
 *  Include all headers files that are related to this library
 */
#include <phpcpp/exception.h>
#include <phpcpp/type.h>
#include <phpcpp/value.h>
#include <phpcpp/valueiterator.h>
#include <phpcpp/array.h>
#include <phpcpp/object.h>
#include <phpcpp/hiddenpointer.h>
#include <phpcpp/globals.h>
#include <phpcpp/argument.h>
#include <phpcpp/byval.h>
#include <phpcpp/byref.h>
#include <phpcpp/global.h>
#include <phpcpp/super.h>
#include <phpcpp/hashmember.h>
#include <phpcpp/parameters.h>
#include <phpcpp/modifiers.h>
#include <phpcpp/base.h>
#include <phpcpp/countable.h>
#include <phpcpp/arrayaccess.h>
#include <phpcpp/iterator.h>
#include <phpcpp/traversable.h>
#include <phpcpp/serializable.h>
#include <phpcpp/classtype.h>
#include <phpcpp/classbase.h>
#include <phpcpp/class.h>
#include <phpcpp/interface.h>
#include <phpcpp/namespace.h>
#include <phpcpp/extension.h>
<<<<<<< HEAD
#include <phpcpp/exception.h>
#include <phpcpp/origexception.h>
=======
#include <phpcpp/call.h>
>>>>>>> 6d42a8f99cbe98201a0d52ab276f6929b66cfe4f

/**
 *  Macro to export a function
 */
#if defined(__GNUC__) && __GNUC__ >= 4
#   define PHPCPP_EXPORT __attribute__ ((visibility("default")))
#else
#   define PHPCPP_EXPORT
#endif

#endif /* phpcpp.h */

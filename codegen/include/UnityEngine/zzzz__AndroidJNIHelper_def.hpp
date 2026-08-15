#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNIHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNIHelper)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace UnityEngine {
class AndroidJavaProxy;
}
namespace UnityEngine {
class AndroidJavaRunnable;
}
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNIHelper;
}
// Write type traits
MARK_REF_T(::UnityEngine::AndroidJNIHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AndroidJNIHelper*, "UnityEngine", "AndroidJNIHelper");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJNIHelper
class CORDL_TYPE AndroidJNIHelper : public ::System::Object {
public:
// Declarations
/// @brief Method Box, addr 0x1822254f0, size 0xe0, virtual false, abstract: false, final false
static inline ::System::IntPtr Box(::UnityEngine::jvalue  val, ::StringW  boxedClass, ::StringW  signature) ;

/// @brief Method Box, addr 0x1822254c0, size 0x30, virtual false, abstract: false, final false
static inline ::System::IntPtr Box(bool  value) ;

/// @brief Method Box, addr 0x182225490, size 0x30, virtual false, abstract: false, final false
static inline ::System::IntPtr Box(int32_t  value) ;

/// @brief Method ConvertFromJNIArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ArrayType>
static inline ArrayType ConvertFromJNIArray(::System::IntPtr  array) ;

/// @brief Method CreateJNIArgArray, addr 0x1822255d0, size 0xa0, virtual false, abstract: false, final false
static inline void CreateJNIArgArray(::ArrayW<::System::Object*>  args, ::System::Span_1<::UnityEngine::jvalue>  jniArgs) ;

/// @brief Method CreateJavaProxy, addr 0x182225670, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateJavaProxy(::UnityEngine::AndroidJavaProxy*  proxy) ;

/// @brief Method CreateJavaRunnable, addr 0x182225790, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable*  jrunnable) ;

/// @brief Method DeleteJNIArgArray, addr 0x182225820, size 0x130, virtual false, abstract: false, final false
static inline void DeleteJNIArgArray(::ArrayW<::System::Object*>  args, ::System::Span_1<::UnityEngine::jvalue>  jniArgs) ;

/// @brief Method GetConstructorID, addr 0x182225980, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetConstructorID(::System::IntPtr  javaClass, ::StringW  signature) ;

/// @brief Method GetConstructorID, addr 0x182225950, size 0x30, virtual false, abstract: false, final false
static inline ::System::IntPtr GetConstructorID(::System::IntPtr  jclass, ::ArrayW<::System::Object*>  args) ;

/// @brief Method GetFieldID, addr 0x182225990, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID(::System::IntPtr  javaClass, ::StringW  fieldName, ::StringW  signature, bool  isStatic) ;

/// @brief Method GetFieldID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
static inline ::System::IntPtr GetFieldID(::System::IntPtr  jclass, ::StringW  fieldName, bool  isStatic) ;

/// @brief Method GetMethodID, addr 0x1822259f0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  javaClass, ::StringW  methodName, ::StringW  signature, bool  isStatic) ;

/// @brief Method GetMethodID, addr 0x1822259a0, size 0x50, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  jclass, ::StringW  methodName, ::ArrayW<::System::Object*>  args, bool  isStatic) ;

/// @brief Method GetMethodID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
static inline ::System::IntPtr GetMethodID(::System::IntPtr  jclass, ::StringW  methodName, ::ArrayW<::System::Object*>  args, bool  isStatic) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidJNIHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNIHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJNIHelper(AndroidJNIHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNIHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJNIHelper(AndroidJNIHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20049};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AndroidJNIHelper) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine

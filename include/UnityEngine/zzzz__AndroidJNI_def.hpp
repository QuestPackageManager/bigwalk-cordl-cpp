#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNI)
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct AndroidJNI_JStringBinding;
}
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNI;
}
namespace UnityEngine {
struct AndroidJNI_JStringBinding;
}
// Write type traits
MARK_REF_T(::UnityEngine::AndroidJNI*);
MARK_VAL_T(::UnityEngine::AndroidJNI_JStringBinding);
DEFINE_IL2CPP_CLASS(::UnityEngine::AndroidJNI*, "UnityEngine", "AndroidJNI");
DEFINE_IL2CPP_CLASS(::UnityEngine::AndroidJNI_JStringBinding, "UnityEngine", "AndroidJNI/JStringBinding");
// Dependencies System.IntPtr
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AndroidJNI/JStringBinding
struct CORDL_TYPE AndroidJNI_JStringBinding {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x18222ba10, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ToString, addr 0x18222ba50, size 0xa0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AndroidJNI_JStringBinding() ;

// Ctor Parameters [CppParam { name: "javaString", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "chars", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ownsRef", ty: "bool", modifiers: "", def_value: None }]
constexpr AndroidJNI_JStringBinding(::System::IntPtr  javaString, ::System::IntPtr  chars, int32_t  length, bool  ownsRef) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20050};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field javaString, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  javaString;

/// @brief Field chars, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  chars;

/// @brief Field length, offset: 0x10, size: 0x4, def value: None
 int32_t  length;

/// @brief Field ownsRef, offset: 0x14, size: 0x1, def value: None
 bool  ownsRef;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AndroidJNI_JStringBinding, javaString) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJNI_JStringBinding, chars) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJNI_JStringBinding, length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJNI_JStringBinding, ownsRef) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AndroidJNI_JStringBinding) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJNI
class CORDL_TYPE AndroidJNI : public ::System::Object {
public:
// Declarations
using JStringBinding = ::UnityEngine::AndroidJNI_JStringBinding;

/// @brief Method CallBooleanMethod, addr 0x182227890, size 0x40, virtual false, abstract: false, final false
static inline bool CallBooleanMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallBooleanMethodUnsafe, addr 0x182227880, size 0x10, virtual false, abstract: false, final false
static inline bool CallBooleanMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallCharMethod, addr 0x1822278e0, size 0x40, virtual false, abstract: false, final false
static inline char16_t CallCharMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallCharMethodUnsafe, addr 0x1822278d0, size 0x10, virtual false, abstract: false, final false
static inline char16_t CallCharMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallDoubleMethod, addr 0x182227930, size 0x40, virtual false, abstract: false, final false
static inline double_t CallDoubleMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallDoubleMethodUnsafe, addr 0x182227920, size 0x10, virtual false, abstract: false, final false
static inline double_t CallDoubleMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallFloatMethod, addr 0x182227980, size 0x40, virtual false, abstract: false, final false
static inline float_t CallFloatMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallFloatMethodUnsafe, addr 0x182227970, size 0x10, virtual false, abstract: false, final false
static inline float_t CallFloatMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallIntMethod, addr 0x1822279d0, size 0x40, virtual false, abstract: false, final false
static inline int32_t CallIntMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallIntMethodUnsafe, addr 0x1822279c0, size 0x10, virtual false, abstract: false, final false
static inline int32_t CallIntMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallLongMethod, addr 0x182227a20, size 0x40, virtual false, abstract: false, final false
static inline int64_t CallLongMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallLongMethodUnsafe, addr 0x182227a10, size 0x10, virtual false, abstract: false, final false
static inline int64_t CallLongMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallObjectMethod, addr 0x182227a70, size 0x40, virtual false, abstract: false, final false
static inline ::System::IntPtr CallObjectMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallObjectMethodUnsafe, addr 0x182227a60, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr CallObjectMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallSByteMethod, addr 0x182227ac0, size 0x40, virtual false, abstract: false, final false
static inline int8_t CallSByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallSByteMethodUnsafe, addr 0x182227ab0, size 0x10, virtual false, abstract: false, final false
static inline int8_t CallSByteMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallShortMethod, addr 0x182227b10, size 0x40, virtual false, abstract: false, final false
static inline int16_t CallShortMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallShortMethodUnsafe, addr 0x182227b00, size 0x10, virtual false, abstract: false, final false
static inline int16_t CallShortMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticBooleanMethod, addr 0x182227b60, size 0x40, virtual false, abstract: false, final false
static inline bool CallStaticBooleanMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticBooleanMethodUnsafe, addr 0x182227b50, size 0x10, virtual false, abstract: false, final false
static inline bool CallStaticBooleanMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticCharMethod, addr 0x182227bb0, size 0x40, virtual false, abstract: false, final false
static inline char16_t CallStaticCharMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticCharMethodUnsafe, addr 0x182227ba0, size 0x10, virtual false, abstract: false, final false
static inline char16_t CallStaticCharMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticDoubleMethod, addr 0x182227c00, size 0x40, virtual false, abstract: false, final false
static inline double_t CallStaticDoubleMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticDoubleMethodUnsafe, addr 0x182227bf0, size 0x10, virtual false, abstract: false, final false
static inline double_t CallStaticDoubleMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticFloatMethod, addr 0x182227c50, size 0x40, virtual false, abstract: false, final false
static inline float_t CallStaticFloatMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticFloatMethodUnsafe, addr 0x182227c40, size 0x10, virtual false, abstract: false, final false
static inline float_t CallStaticFloatMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticIntMethod, addr 0x182227ca0, size 0x40, virtual false, abstract: false, final false
static inline int32_t CallStaticIntMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticIntMethodUnsafe, addr 0x182227c90, size 0x10, virtual false, abstract: false, final false
static inline int32_t CallStaticIntMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticLongMethod, addr 0x182227cf0, size 0x40, virtual false, abstract: false, final false
static inline int64_t CallStaticLongMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticLongMethodUnsafe, addr 0x182227ce0, size 0x10, virtual false, abstract: false, final false
static inline int64_t CallStaticLongMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticObjectMethod, addr 0x182227d40, size 0x40, virtual false, abstract: false, final false
static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticObjectMethodUnsafe, addr 0x182227d30, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr CallStaticObjectMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticSByteMethod, addr 0x182227d90, size 0x40, virtual false, abstract: false, final false
static inline int8_t CallStaticSByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticSByteMethodUnsafe, addr 0x182227d80, size 0x10, virtual false, abstract: false, final false
static inline int8_t CallStaticSByteMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticShortMethod, addr 0x182227de0, size 0x40, virtual false, abstract: false, final false
static inline int16_t CallStaticShortMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticShortMethodUnsafe, addr 0x182227dd0, size 0x10, virtual false, abstract: false, final false
static inline int16_t CallStaticShortMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticStringMethod, addr 0x182227fd0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticStringMethod, addr 0x182227f90, size 0x40, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticStringMethodUnsafe, addr 0x182227e70, size 0x120, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticStringMethodUnsafeInternal, addr 0x182227e30, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJNI_JStringBinding CallStaticStringMethodUnsafeInternal(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticStringMethodUnsafeInternal_Injected, addr 0x182227e20, size 0x10, virtual false, abstract: false, final false
static inline void CallStaticStringMethodUnsafeInternal_Injected(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method CallStaticVoidMethod, addr 0x182228050, size 0x40, virtual false, abstract: false, final false
static inline void CallStaticVoidMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticVoidMethodUnsafe, addr 0x182228040, size 0x10, virtual false, abstract: false, final false
static inline void CallStaticVoidMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStringMethod, addr 0x182228240, size 0x70, virtual false, abstract: false, final false
static inline ::StringW CallStringMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStringMethod, addr 0x182228200, size 0x40, virtual false, abstract: false, final false
static inline ::StringW CallStringMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStringMethodUnsafe, addr 0x1822280e0, size 0x120, virtual false, abstract: false, final false
static inline ::StringW CallStringMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStringMethodUnsafeInternal, addr 0x1822280a0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJNI_JStringBinding CallStringMethodUnsafeInternal(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStringMethodUnsafeInternal_Injected, addr 0x182228090, size 0x10, virtual false, abstract: false, final false
static inline void CallStringMethodUnsafeInternal_Injected(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method ConvertToBooleanArray, addr 0x1822282c0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToBooleanArray(::ArrayW<bool>  array) ;

/// @brief Method ConvertToBooleanArray_Injected, addr 0x1822282b0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToBooleanArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  array) ;

/// @brief Method DeleteLocalRef, addr 0x182228330, size 0x10, virtual false, abstract: false, final false
static inline void DeleteLocalRef(::System::IntPtr  obj) ;

/// @brief Method DeleteWeakGlobalRef, addr 0x182228340, size 0x10, virtual false, abstract: false, final false
static inline void DeleteWeakGlobalRef(::System::IntPtr  obj) ;

/// @brief Method ExceptionClear, addr 0x182228350, size 0x10, virtual false, abstract: false, final false
static inline void ExceptionClear() ;

/// @brief Method ExceptionOccurred, addr 0x182228360, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ExceptionOccurred() ;

/// @brief Method FindClass, addr 0x182228380, size 0x110, virtual false, abstract: false, final false
static inline ::System::IntPtr FindClass(::StringW  name) ;

/// @brief Method FindClass_Injected, addr 0x182228370, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr FindClass_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method FromBooleanArray, addr 0x1822284a0, size 0x80, virtual false, abstract: false, final false
static inline ::ArrayW<bool> FromBooleanArray(::System::IntPtr  array) ;

/// @brief Method FromBooleanArray_Injected, addr 0x182228490, size 0x10, virtual false, abstract: false, final false
static inline void FromBooleanArray_Injected(::System::IntPtr  array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method FromByteArray, addr 0x182228530, size 0x80, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromByteArray(::System::IntPtr  array) ;

/// @brief Method FromByteArray_Injected, addr 0x182228520, size 0x10, virtual false, abstract: false, final false
static inline void FromByteArray_Injected(::System::IntPtr  array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method FromCharArray, addr 0x1822285b0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> FromCharArray(::System::IntPtr  array) ;

/// @brief Method FromDoubleArray, addr 0x1822285c0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<double_t> FromDoubleArray(::System::IntPtr  array) ;

/// @brief Method FromFloatArray, addr 0x1822285d0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> FromFloatArray(::System::IntPtr  array) ;

/// @brief Method FromIntArray, addr 0x1822285e0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> FromIntArray(::System::IntPtr  array) ;

/// @brief Method FromLongArray, addr 0x1822285f0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<int64_t> FromLongArray(::System::IntPtr  array) ;

/// @brief Method FromReflectedMethod, addr 0x182228600, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr FromReflectedMethod(::System::IntPtr  refMethod) ;

/// @brief Method FromSByteArray, addr 0x182228610, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<int8_t> FromSByteArray(::System::IntPtr  array) ;

/// @brief Method FromShortArray, addr 0x182228620, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<int16_t> FromShortArray(::System::IntPtr  array) ;

/// @brief Method GetArrayLength, addr 0x182228630, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetArrayLength(::System::IntPtr  array) ;

/// @brief Method GetFieldID, addr 0x182228650, size 0x1f0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetFieldID_Injected, addr 0x182228640, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sig) ;

/// @brief Method GetMethodID, addr 0x182228850, size 0x1f0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetMethodID_Injected, addr 0x182228840, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sig) ;

/// @brief Method GetObjectArrayElement, addr 0x182228a40, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetObjectClass, addr 0x182228a50, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectClass(::System::IntPtr  obj) ;

/// @brief Method GetStaticBooleanField, addr 0x182228a60, size 0x10, virtual false, abstract: false, final false
static inline bool GetStaticBooleanField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticCharField, addr 0x182228a70, size 0x10, virtual false, abstract: false, final false
static inline char16_t GetStaticCharField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticDoubleField, addr 0x182228a80, size 0x10, virtual false, abstract: false, final false
static inline double_t GetStaticDoubleField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticFieldID, addr 0x182228aa0, size 0x1f0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetStaticFieldID_Injected, addr 0x182228a90, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticFieldID_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sig) ;

/// @brief Method GetStaticFloatField, addr 0x182228c90, size 0x10, virtual false, abstract: false, final false
static inline float_t GetStaticFloatField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticIntField, addr 0x182228ca0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetStaticIntField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticLongField, addr 0x182228cb0, size 0x10, virtual false, abstract: false, final false
static inline int64_t GetStaticLongField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticMethodID, addr 0x182228cd0, size 0x1f0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticMethodID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetStaticMethodID_Injected, addr 0x182228cc0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticMethodID_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sig) ;

/// @brief Method GetStaticObjectField, addr 0x182228ec0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticObjectField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticSByteField, addr 0x182228ed0, size 0x10, virtual false, abstract: false, final false
static inline int8_t GetStaticSByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticShortField, addr 0x182228ee0, size 0x10, virtual false, abstract: false, final false
static inline int16_t GetStaticShortField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticStringField, addr 0x182228f40, size 0x120, virtual false, abstract: false, final false
static inline ::StringW GetStaticStringField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticStringFieldInternal, addr 0x182228f00, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJNI_JStringBinding GetStaticStringFieldInternal(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticStringFieldInternal_Injected, addr 0x182228ef0, size 0x10, virtual false, abstract: false, final false
static inline void GetStaticStringFieldInternal_Injected(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method GetStringChars, addr 0x1822290a0, size 0x120, virtual false, abstract: false, final false
static inline ::StringW GetStringChars(::System::IntPtr  str) ;

/// @brief Method GetStringCharsInternal, addr 0x182229070, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJNI_JStringBinding GetStringCharsInternal(::System::IntPtr  str) ;

/// @brief Method GetStringCharsInternal_Injected, addr 0x182229060, size 0x10, virtual false, abstract: false, final false
static inline void GetStringCharsInternal_Injected(::System::IntPtr  str, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method InvokeAction, addr 0x1802dc3f0, size 0x10, virtual false, abstract: false, final false
static inline void InvokeAction(::System::Action*  action) ;

/// @brief Method IsSameObject, addr 0x1822291c0, size 0x10, virtual false, abstract: false, final false
static inline bool IsSameObject(::System::IntPtr  obj1, ::System::IntPtr  obj2) ;

/// @brief Method NewGlobalRef, addr 0x1822291d0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr NewGlobalRef(::System::IntPtr  obj) ;

/// @brief Method NewLocalRef, addr 0x1822291e0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr NewLocalRef(::System::IntPtr  obj) ;

/// @brief Method NewObject, addr 0x182229210, size 0x40, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObject(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method NewObjectA, addr 0x1822291f0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObjectA(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method NewObjectArray, addr 0x182229200, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObjectArray(int32_t  size, ::System::IntPtr  clazz, ::System::IntPtr  obj) ;

/// @brief Method NewString, addr 0x182229370, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr NewString(::StringW  chars) ;

/// @brief Method NewStringFromStr, addr 0x182229260, size 0x110, virtual false, abstract: false, final false
static inline ::System::IntPtr NewStringFromStr(::StringW  chars) ;

/// @brief Method NewStringFromStr_Injected, addr 0x182229250, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr NewStringFromStr_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  chars) ;

/// @brief Method NewWeakGlobalRef, addr 0x182229380, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr NewWeakGlobalRef(::System::IntPtr  obj) ;

/// @brief Method PopLocalFrame, addr 0x182229390, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr PopLocalFrame(::System::IntPtr  ptr) ;

/// @brief Method PushLocalFrame, addr 0x1822293a0, size 0x10, virtual false, abstract: false, final false
static inline int32_t PushLocalFrame(int32_t  capacity) ;

/// @brief Method QueueDeleteGlobalRef, addr 0x1822293b0, size 0x10, virtual false, abstract: false, final false
static inline void QueueDeleteGlobalRef(::System::IntPtr  obj) ;

/// @brief Method ReleaseStringChars, addr 0x1822293d0, size 0x10, virtual false, abstract: false, final false
static inline void ReleaseStringChars(::UnityEngine::AndroidJNI_JStringBinding  str) ;

/// @brief Method ReleaseStringChars_Injected, addr 0x1822293c0, size 0x10, virtual false, abstract: false, final false
static inline void ReleaseStringChars_Injected(::by_ref<::UnityEngine::AndroidJNI_JStringBinding>  str) ;

/// @brief Method SetObjectArrayElement, addr 0x1822293e0, size 0x10, virtual false, abstract: false, final false
static inline void SetObjectArrayElement(::System::IntPtr  array, int32_t  index, ::System::IntPtr  obj) ;

/// @brief Method ToBooleanArray, addr 0x1822293f0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr ToBooleanArray(::ArrayW<bool>  array) ;

/// @brief Method ToByteArray, addr 0x182229470, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr ToByteArray(::ArrayW<uint8_t>  array) ;

/// @brief Method ToByteArray_Injected, addr 0x182229460, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ToByteArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  array) ;

/// @brief Method ToCharArray, addr 0x1822294f0, size 0x30, virtual false, abstract: false, final false
static inline ::System::IntPtr ToCharArray(::ArrayW<char16_t>  array) ;

/// @brief Method ToCharArray, addr 0x1822294e0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ToCharArray(char16_t*  array, int32_t  length) ;

/// @brief Method ToDoubleArray, addr 0x182229520, size 0x30, virtual false, abstract: false, final false
static inline ::System::IntPtr ToDoubleArray(::ArrayW<double_t>  array) ;

/// @brief Method ToDoubleArray, addr 0x182229550, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ToDoubleArray(double_t*  array, int32_t  length) ;

/// @brief Method ToFloatArray, addr 0x182229560, size 0x30, virtual false, abstract: false, final false
static inline ::System::IntPtr ToFloatArray(::ArrayW<float_t>  array) ;

/// @brief Method ToFloatArray, addr 0x182229590, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ToFloatArray(float_t*  array, int32_t  length) ;

/// @brief Method ToIntArray, addr 0x1822295b0, size 0x30, virtual false, abstract: false, final false
static inline ::System::IntPtr ToIntArray(::ArrayW<int32_t>  array) ;

/// @brief Method ToIntArray, addr 0x1822295a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ToIntArray(int32_t*  array, int32_t  length) ;

/// @brief Method ToLongArray, addr 0x1822295e0, size 0x30, virtual false, abstract: false, final false
static inline ::System::IntPtr ToLongArray(::ArrayW<int64_t>  array) ;

/// @brief Method ToLongArray, addr 0x182229610, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ToLongArray(int64_t*  array, int32_t  length) ;

/// @brief Method ToObjectArray, addr 0x182229620, size 0x30, virtual false, abstract: false, final false
static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr>  array, ::System::IntPtr  arrayClass) ;

/// @brief Method ToObjectArray, addr 0x182229650, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ToObjectArray(::System::IntPtr*  array, int32_t  length, ::System::IntPtr  arrayClass) ;

/// @brief Method ToSByteArray, addr 0x182229660, size 0x30, virtual false, abstract: false, final false
static inline ::System::IntPtr ToSByteArray(::ArrayW<int8_t>  array) ;

/// @brief Method ToSByteArray, addr 0x182229690, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ToSByteArray(int8_t*  array, int32_t  length) ;

/// @brief Method ToShortArray, addr 0x1822296b0, size 0x30, virtual false, abstract: false, final false
static inline ::System::IntPtr ToShortArray(::ArrayW<int16_t>  array) ;

/// @brief Method ToShortArray, addr 0x1822296a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ToShortArray(int16_t*  array, int32_t  length) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidJNI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJNI(AndroidJNI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJNI(AndroidJNI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20051};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AndroidJNI) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine

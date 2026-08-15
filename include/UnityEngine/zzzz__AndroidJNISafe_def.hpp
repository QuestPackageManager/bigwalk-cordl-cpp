#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNISafe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNISafe)
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNISafe;
}
// Write type traits
MARK_REF_T(::UnityEngine::AndroidJNISafe*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AndroidJNISafe*, "UnityEngine", "AndroidJNISafe");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJNISafe
class CORDL_TYPE AndroidJNISafe : public ::System::Object {
public:
// Declarations
/// @brief Method CallBooleanMethod, addr 0x182225a00, size 0x80, virtual false, abstract: false, final false
static inline bool CallBooleanMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallCharMethod, addr 0x182225a80, size 0x80, virtual false, abstract: false, final false
static inline char16_t CallCharMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallDoubleMethod, addr 0x182225b00, size 0xa0, virtual false, abstract: false, final false
static inline double_t CallDoubleMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallFloatMethod, addr 0x182225ba0, size 0xa0, virtual false, abstract: false, final false
static inline float_t CallFloatMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallIntMethod, addr 0x182225c40, size 0x80, virtual false, abstract: false, final false
static inline int32_t CallIntMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallLongMethod, addr 0x182225cc0, size 0x80, virtual false, abstract: false, final false
static inline int64_t CallLongMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallObjectMethod, addr 0x182225dc0, size 0x50, virtual false, abstract: false, final false
static inline ::System::IntPtr CallObjectMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallObjectMethod, addr 0x182225d40, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr CallObjectMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallSByteMethod, addr 0x182225e10, size 0x80, virtual false, abstract: false, final false
static inline int8_t CallSByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallShortMethod, addr 0x182225e90, size 0x80, virtual false, abstract: false, final false
static inline int16_t CallShortMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticBooleanMethod, addr 0x182225f10, size 0x80, virtual false, abstract: false, final false
static inline bool CallStaticBooleanMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticCharMethod, addr 0x182225f90, size 0x80, virtual false, abstract: false, final false
static inline char16_t CallStaticCharMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticDoubleMethod, addr 0x182226010, size 0xa0, virtual false, abstract: false, final false
static inline double_t CallStaticDoubleMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticFloatMethod, addr 0x1822260b0, size 0xa0, virtual false, abstract: false, final false
static inline float_t CallStaticFloatMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticIntMethod, addr 0x182226150, size 0x80, virtual false, abstract: false, final false
static inline int32_t CallStaticIntMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticLongMethod, addr 0x1822261d0, size 0x80, virtual false, abstract: false, final false
static inline int64_t CallStaticLongMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticObjectMethod, addr 0x1822262d0, size 0x50, virtual false, abstract: false, final false
static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticObjectMethod, addr 0x182226250, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticSByteMethod, addr 0x182226320, size 0x80, virtual false, abstract: false, final false
static inline int8_t CallStaticSByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticShortMethod, addr 0x1822263a0, size 0x80, virtual false, abstract: false, final false
static inline int16_t CallStaticShortMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticStringMethod, addr 0x1822264f0, size 0x50, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticStringMethod, addr 0x182226420, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticVoidMethod, addr 0x182226540, size 0x70, virtual false, abstract: false, final false
static inline void CallStaticVoidMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStringMethod, addr 0x1822265b0, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW CallStringMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CheckException, addr 0x182226680, size 0x1e0, virtual false, abstract: false, final false
static inline void CheckException() ;

/// @brief Method DeleteLocalRef, addr 0x182226860, size 0x10, virtual false, abstract: false, final false
static inline void DeleteLocalRef(::System::IntPtr  localref) ;

/// @brief Method DeleteWeakGlobalRef, addr 0x182226870, size 0x10, virtual false, abstract: false, final false
static inline void DeleteWeakGlobalRef(::System::IntPtr  globalref) ;

/// @brief Method FindClass, addr 0x182226880, size 0x50, virtual false, abstract: false, final false
static inline ::System::IntPtr FindClass(::StringW  name) ;

/// @brief Method FromBooleanArray, addr 0x1822268d0, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<bool> FromBooleanArray(::System::IntPtr  array) ;

/// @brief Method FromByteArray, addr 0x182226920, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromByteArray(::System::IntPtr  array) ;

/// @brief Method FromCharArray, addr 0x182226970, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> FromCharArray(::System::IntPtr  array) ;

/// @brief Method FromDoubleArray, addr 0x1822269d0, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<double_t> FromDoubleArray(::System::IntPtr  array) ;

/// @brief Method FromFloatArray, addr 0x182226a30, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> FromFloatArray(::System::IntPtr  array) ;

/// @brief Method FromIntArray, addr 0x182226a90, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> FromIntArray(::System::IntPtr  array) ;

/// @brief Method FromLongArray, addr 0x182226af0, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<int64_t> FromLongArray(::System::IntPtr  array) ;

/// @brief Method FromReflectedMethod, addr 0x182226b50, size 0x60, virtual false, abstract: false, final false
static inline ::System::IntPtr FromReflectedMethod(::System::IntPtr  refMethod) ;

/// @brief Method FromSByteArray, addr 0x182226bb0, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<int8_t> FromSByteArray(::System::IntPtr  array) ;

/// @brief Method FromShortArray, addr 0x182226c10, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<int16_t> FromShortArray(::System::IntPtr  array) ;

/// @brief Method GetArrayLength, addr 0x182226c70, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetArrayLength(::System::IntPtr  array) ;

/// @brief Method GetFieldID, addr 0x182226cc0, size 0x50, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetMethodID, addr 0x182226d10, size 0x50, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  obj, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetObjectArrayElement, addr 0x182226d60, size 0x60, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetObjectClass, addr 0x182226dc0, size 0x60, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectClass(::System::IntPtr  ptr) ;

/// @brief Method GetStaticBooleanField, addr 0x182226e20, size 0x60, virtual false, abstract: false, final false
static inline bool GetStaticBooleanField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticCharField, addr 0x182226e80, size 0x60, virtual false, abstract: false, final false
static inline char16_t GetStaticCharField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticDoubleField, addr 0x182226ee0, size 0x60, virtual false, abstract: false, final false
static inline double_t GetStaticDoubleField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticFieldID, addr 0x182226f40, size 0x50, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetStaticFloatField, addr 0x182226f90, size 0x60, virtual false, abstract: false, final false
static inline float_t GetStaticFloatField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticIntField, addr 0x182226ff0, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetStaticIntField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticLongField, addr 0x182227040, size 0x60, virtual false, abstract: false, final false
static inline int64_t GetStaticLongField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticMethodID, addr 0x1822270a0, size 0x50, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticMethodID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetStaticObjectField, addr 0x1822270f0, size 0x60, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticObjectField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticSByteField, addr 0x182227150, size 0x60, virtual false, abstract: false, final false
static inline int8_t GetStaticSByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticShortField, addr 0x1822271b0, size 0x60, virtual false, abstract: false, final false
static inline int16_t GetStaticShortField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticStringField, addr 0x182227210, size 0x50, virtual false, abstract: false, final false
static inline ::StringW GetStaticStringField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStringChars, addr 0x182227260, size 0x50, virtual false, abstract: false, final false
static inline ::StringW GetStringChars(::System::IntPtr  str) ;

/// @brief Method NewObject, addr 0x1822272b0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObject(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method NewString, addr 0x182227330, size 0x50, virtual false, abstract: false, final false
static inline ::System::IntPtr NewString(::StringW  chars) ;

/// @brief Method PushLocalFrame, addr 0x182227380, size 0x30, virtual false, abstract: false, final false
static inline void PushLocalFrame(int32_t  capacity) ;

/// @brief Method QueueDeleteGlobalRef, addr 0x1822273b0, size 0x10, virtual false, abstract: false, final false
static inline void QueueDeleteGlobalRef(::System::IntPtr  globalref) ;

/// @brief Method ToBooleanArray, addr 0x1822273c0, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ToBooleanArray(::ArrayW<bool>  array) ;

/// @brief Method ToByteArray, addr 0x182227460, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ToByteArray(::ArrayW<uint8_t>  array) ;

/// @brief Method ToCharArray, addr 0x182227500, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr ToCharArray(::ArrayW<char16_t>  array) ;

/// @brief Method ToDoubleArray, addr 0x182227570, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr ToDoubleArray(::ArrayW<double_t>  array) ;

/// @brief Method ToFloatArray, addr 0x1822275e0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr ToFloatArray(::ArrayW<float_t>  array) ;

/// @brief Method ToIntArray, addr 0x182227650, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr ToIntArray(::ArrayW<int32_t>  array) ;

/// @brief Method ToLongArray, addr 0x1822276c0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr ToLongArray(::ArrayW<int64_t>  array) ;

/// @brief Method ToObjectArray, addr 0x182227730, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr>  array, ::System::IntPtr  type) ;

/// @brief Method ToSByteArray, addr 0x1822277a0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr ToSByteArray(::ArrayW<int8_t>  array) ;

/// @brief Method ToShortArray, addr 0x182227810, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr ToShortArray(::ArrayW<int16_t>  array) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidJNISafe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJNISafe(AndroidJNISafe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJNISafe(AndroidJNISafe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20052};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AndroidJNISafe) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine

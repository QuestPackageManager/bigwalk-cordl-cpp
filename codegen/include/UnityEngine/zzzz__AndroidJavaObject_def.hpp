#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AndroidJavaObject)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class GlobalJavaObjectRef;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaObject;
}
// Write type traits
MARK_REF_T(::UnityEngine::AndroidJavaObject*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AndroidJavaObject*, "UnityEngine", "AndroidJavaObject");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJavaObject
class CORDL_TYPE AndroidJavaObject : public ::System::Object {
public:
// Declarations
/// @brief Field enableDebugPrints, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_enableDebugPrints, put=setStaticF_enableDebugPrints)) bool  enableDebugPrints;

/// @brief Field m_jclass, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_jclass, put=__cordl_internal_set_m_jclass)) ::UnityEngine::GlobalJavaObjectRef*  m_jclass;

/// @brief Field m_jobject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_jobject, put=__cordl_internal_set_m_jobject)) ::UnityEngine::GlobalJavaObjectRef*  m_jobject;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AndroidJavaClassDeleteLocalRef, addr 0x1822298c0, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaClass* AndroidJavaClassDeleteLocalRef(::System::IntPtr  jclass) ;

/// @brief Method AndroidJavaObjectDeleteLocalRef, addr 0x182229950, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* AndroidJavaObjectDeleteLocalRef(::System::IntPtr  jobject) ;

/// @brief Method Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType Call(::StringW  methodName, ::ArrayW<::System::Object*>  args) ;

/// @brief Method CallStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType CallStatic(::StringW  methodName, ::ArrayW<::System::Object*>  args) ;

/// @brief Method CallStatic, addr 0x1822299e0, size 0x70, virtual false, abstract: false, final false
inline void CallStatic(::StringW  methodName, ::ArrayW<::System::Object*>  args) ;

/// @brief Method DebugPrint, addr 0x182229a50, size 0x30, virtual false, abstract: false, final false
inline void DebugPrint(::StringW  msg) ;

/// @brief Method Dispose, addr 0x180e6eca0, size 0x5510, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x182229a80, size 0x90, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x1815bcac0, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FromJavaArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
static inline ReturnType FromJavaArray(::System::IntPtr  jobject) ;

/// @brief Method FromJavaArrayDeleteLocalRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
static inline ReturnType FromJavaArrayDeleteLocalRef(::System::IntPtr  jobject) ;

/// @brief Method GetRawClass, addr 0x181cff390, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr GetRawClass() ;

/// @brief Method GetRawObject, addr 0x182229b10, size 0x20, virtual false, abstract: false, final false
inline ::System::IntPtr GetRawObject() ;

/// @brief Method GetStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline FieldType GetStatic(::StringW  fieldName) ;

static inline ::UnityEngine::AndroidJavaObject* New_ctor() ;

static inline ::UnityEngine::AndroidJavaObject* New_ctor(::StringW  className, ::ArrayW<::System::Object*>  args) ;

static inline ::UnityEngine::AndroidJavaObject* New_ctor(::System::IntPtr  jobject) ;

/// @brief Method _AndroidJavaObject, addr 0x182229b30, size 0x110, virtual false, abstract: false, final false
inline void _AndroidJavaObject(::StringW  className, ::ArrayW<::System::Object*>  args) ;

/// @brief Method _AndroidJavaObject, addr 0x182229c40, size 0x210, virtual false, abstract: false, final false
inline void _AndroidJavaObject(::System::IntPtr  constructorID, ::ArrayW<::System::Object*>  args) ;

/// @brief Method _Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType _Call(::System::IntPtr  methodID, ::ArrayW<::System::Object*>  args) ;

/// @brief Method _Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType _Call(::StringW  methodName, ::ArrayW<::System::Object*>  args) ;

/// @brief Method _CallStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType _CallStatic(::System::IntPtr  methodID, ::ArrayW<::System::Object*>  args) ;

/// @brief Method _CallStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
inline ReturnType _CallStatic(::StringW  methodName, ::ArrayW<::System::Object*>  args) ;

/// @brief Method _CallStatic, addr 0x182229e50, size 0x200, virtual false, abstract: false, final false
inline void _CallStatic(::System::IntPtr  methodID, ::ArrayW<::System::Object*>  args) ;

/// @brief Method _CallStatic, addr 0x1822299e0, size 0x70, virtual false, abstract: false, final false
inline void _CallStatic(::StringW  methodName, ::ArrayW<::System::Object*>  args) ;

/// @brief Method _GetRawClass, addr 0x181cff390, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr _GetRawClass() ;

/// @brief Method _GetRawObject, addr 0x182229b10, size 0x20, virtual false, abstract: false, final false
inline ::System::IntPtr _GetRawObject() ;

/// @brief Method _GetStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline FieldType _GetStatic(::System::IntPtr  fieldID) ;

/// @brief Method _GetStatic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename FieldType>
inline FieldType _GetStatic(::StringW  fieldName) ;

constexpr ::UnityEngine::GlobalJavaObjectRef* const& __cordl_internal_get_m_jclass() const;

constexpr ::UnityEngine::GlobalJavaObjectRef*& __cordl_internal_get_m_jclass() ;

constexpr ::UnityEngine::GlobalJavaObjectRef* const& __cordl_internal_get_m_jobject() const;

constexpr ::UnityEngine::GlobalJavaObjectRef*& __cordl_internal_get_m_jobject() ;

constexpr void __cordl_internal_set_m_jclass(::UnityEngine::GlobalJavaObjectRef*  value) ;

constexpr void __cordl_internal_set_m_jobject(::UnityEngine::GlobalJavaObjectRef*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x182229b30, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::StringW  className, ::ArrayW<::System::Object*>  args) ;

/// @brief Method .ctor, addr 0x18222a050, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  jobject) ;

static inline bool getStaticF_enableDebugPrints() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_enableDebugPrints(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidJavaObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJavaObject(AndroidJavaObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJavaObject(AndroidJavaObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20044};

/// @brief Field m_jobject, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GlobalJavaObjectRef*  ___m_jobject;

/// @brief Field m_jclass, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::GlobalJavaObjectRef*  ___m_jclass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AndroidJavaObject, ___m_jobject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJavaObject, ___m_jclass) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AndroidJavaObject) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine

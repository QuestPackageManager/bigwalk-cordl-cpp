#pragma once
// IWYU pragma private; include "Rewired/Utils/ReflectionTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionTools)
namespace Rewired::Utils {
struct ReflectionTools_BindingFlags;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::Utils {
struct ReflectionTools_BindingFlags;
}
namespace Rewired::Utils {
class ReflectionTools;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::ReflectionTools_BindingFlags);
MARK_REF_T(::Rewired::Utils::ReflectionTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::ReflectionTools_BindingFlags, "Rewired.Utils", "ReflectionTools/BindingFlags");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::ReflectionTools*, "Rewired.Utils", "ReflectionTools");
// Dependencies 
namespace Rewired::Utils {
// Is value type: true
// CS Name: Rewired.Utils.ReflectionTools/BindingFlags
struct CORDL_TYPE ReflectionTools_BindingFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReflectionTools_BindingFlags_Unwrapped
enum struct __ReflectionTools_BindingFlags_Unwrapped : int32_t {
__E_IgnoreCase = static_cast<int32_t>(0x1),
__E_DeclaredOnly = static_cast<int32_t>(0x2),
__E_Instance = static_cast<int32_t>(0x4),
__E_Static = static_cast<int32_t>(0x8),
__E_Public = static_cast<int32_t>(0x10),
__E_NonPublic = static_cast<int32_t>(0x20),
__E_FlattenHierarchy = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReflectionTools_BindingFlags_Unwrapped () const noexcept {
return static_cast<__ReflectionTools_BindingFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReflectionTools_BindingFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReflectionTools_BindingFlags(int32_t  value__) noexcept;

/// @brief Field DeclaredOnly value: I32(2)
static ::Rewired::Utils::ReflectionTools_BindingFlags const DeclaredOnly;

/// @brief Field FlattenHierarchy value: I32(64)
static ::Rewired::Utils::ReflectionTools_BindingFlags const FlattenHierarchy;

/// @brief Field IgnoreCase value: I32(1)
static ::Rewired::Utils::ReflectionTools_BindingFlags const IgnoreCase;

/// @brief Field Instance value: I32(4)
static ::Rewired::Utils::ReflectionTools_BindingFlags const Instance;

/// @brief Field NonPublic value: I32(32)
static ::Rewired::Utils::ReflectionTools_BindingFlags const NonPublic;

/// @brief Field Public value: I32(16)
static ::Rewired::Utils::ReflectionTools_BindingFlags const Public;

/// @brief Field Static value: I32(8)
static ::Rewired::Utils::ReflectionTools_BindingFlags const Static;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2924};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::ReflectionTools_BindingFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::ReflectionTools_BindingFlags) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Utils
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.ReflectionTools
class CORDL_TYPE ReflectionTools : public ::System::Object {
public:
// Declarations
using BindingFlags = ::Rewired::Utils::ReflectionTools_BindingFlags;

/// @brief Method CallPrivateMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TRet>
static inline TRet CallPrivateMethod(T  obj, ::StringW  name, ::ArrayW<::System::Object*>  param) ;

/// @brief Method DoesTypeImplement, addr 0x18190c9e0, size 0x30, virtual false, abstract: false, final false
static inline bool DoesTypeImplement(::System::Type*  type, ::System::Type*  baseOrInterfaceType) ;

/// @brief Method EUNSykChYQgZYmKQaMrDLKOgpDK, addr 0x18190ca10, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Type* EUNSykChYQgZYmKQaMrDLKOgpDK(::StringW  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetAttribute(::System::Type*  type, bool  inherit) ;

/// @brief Method GetFields, addr 0x18190cb30, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetFields(::System::Type*  type) ;

/// @brief Method GetFields, addr 0x18190cad0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetFields(::System::Type*  type, ::Rewired::Utils::ReflectionTools_BindingFlags  bindingFlags) ;

/// @brief Method GetGenericArguments, addr 0x18190cb70, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Type*> GetGenericArguments(::System::Type*  type) ;

/// @brief Method GetMethodInfo, addr 0x18190cbc0, size 0x10, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodInfo* GetMethodInfo(::System::Delegate*  delegate) ;

/// @brief Method GetMethods, addr 0x18190cc30, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* GetMethods(::System::Type*  type) ;

/// @brief Method GetMethods, addr 0x18190cbd0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* GetMethods(::System::Type*  type, ::Rewired::Utils::ReflectionTools_BindingFlags  bindingFlags) ;

/// @brief Method GetPrivateField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TRet>
static inline TRet GetPrivateField(T  obj, ::StringW  name) ;

/// @brief Method GetPrivateProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TRet>
static inline TRet GetPrivateProperty(T  obj, ::StringW  name) ;

/// @brief Method GetProperties, addr 0x18190cc70, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetProperties(::System::Type*  type) ;

/// @brief Method GetProperties, addr 0x18190ccb0, size 0x60, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetProperties(::System::Type*  type, ::Rewired::Utils::ReflectionTools_BindingFlags  bindingFlags) ;

/// @brief Method GetTypeInAssembly, addr 0x18190cd10, size 0x50, virtual false, abstract: false, final false
static inline ::System::Type* GetTypeInAssembly(::StringW  classPath, ::StringW  assemblyName, bool  ignoreCase) ;

/// @brief Method GetTypeInUnityBuildAssembly, addr 0x18190cd60, size 0x10, virtual false, abstract: false, final false
static inline ::System::Type* GetTypeInUnityBuildAssembly(::StringW  classPath, bool  ignoreCase) ;

/// @brief Method GetTypeInUnityEditorAssembly, addr 0x18190cd70, size 0x10, virtual false, abstract: false, final false
static inline ::System::Type* GetTypeInUnityEditorAssembly(::StringW  classPath, bool  ignoreCase) ;

/// @brief Method GetUnderlyingEnumType, addr 0x1819036d0, size 0x70, virtual false, abstract: false, final false
static inline ::System::Type* GetUnderlyingEnumType(::System::Type*  enumType) ;

/// @brief Method IsArray, addr 0x18190cd80, size 0x20, virtual false, abstract: false, final false
static inline bool IsArray(::System::Type*  type) ;

/// @brief Method IsAssemblyLoaded, addr 0x18190cda0, size 0x190, virtual false, abstract: false, final false
static inline bool IsAssemblyLoaded(::StringW  assemblyName, bool  useShortName, bool  ignoreCase) ;

/// @brief Method IsClass, addr 0x1817e63d0, size 0x20, virtual false, abstract: false, final false
static inline bool IsClass(::System::Type*  type) ;

/// @brief Method IsDefined, addr 0x18190cf30, size 0x90, virtual false, abstract: false, final false
static inline bool IsDefined(::System::Type*  type, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method IsEnum, addr 0x181903740, size 0x50, virtual false, abstract: false, final false
static inline bool IsEnum(::System::Type*  type) ;

/// @brief Method IsGenericType, addr 0x18190cfc0, size 0x50, virtual false, abstract: false, final false
static inline bool IsGenericType(::System::Type*  type) ;

/// @brief Method IsPrimitive, addr 0x1817e64a0, size 0x20, virtual false, abstract: false, final false
static inline bool IsPrimitive(::System::Type*  type) ;

/// @brief Method IsValueType, addr 0x1817e64e0, size 0x20, virtual false, abstract: false, final false
static inline bool IsValueType(::System::Type*  type) ;

/// @brief Method SetPrivateField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetPrivateField(T  obj, ::StringW  name, ::System::Object*  value) ;

/// @brief Method SetPrivateProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetPrivateProperty(T  obj, ::StringW  name, ::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionTools(ReflectionTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionTools(ReflectionTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2925};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::ReflectionTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils

#pragma once
// IWYU pragma private; include "System/Attribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Attribute)
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Attribute;
}
// Write type traits
MARK_REF_T(::System::Attribute*);
DEFINE_IL2CPP_CLASS(::System::Attribute*, "System", "Attribute");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Attribute
class CORDL_TYPE Attribute : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_TypeId)) ::System::Object*  TypeId;

/// @brief Method AreFieldValuesEqual, addr 0x18172eea0, size 0x1b0, virtual false, abstract: false, final false
static inline bool AreFieldValuesEqual(::System::Object*  thisValue, ::System::Object*  thatValue) ;

/// @brief Method Equals, addr 0x18172f050, size 0x200, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetCustomAttribute, addr 0x18172f2e0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::Assembly*  element, ::System::Type*  attributeType) ;

/// @brief Method GetCustomAttribute, addr 0x18172f250, size 0x90, virtual false, abstract: false, final false
static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::Assembly*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttribute, addr 0x18172f400, size 0x90, virtual false, abstract: false, final false
static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo*  element, ::System::Type*  attributeType) ;

/// @brief Method GetCustomAttribute, addr 0x18172f370, size 0x90, virtual false, abstract: false, final false
static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x18172fd50, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Assembly*  element) ;

/// @brief Method GetCustomAttributes, addr 0x18172f5b0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Assembly*  element, ::System::Type*  attributeType) ;

/// @brief Method GetCustomAttributes, addr 0x18172f790, size 0x130, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Assembly*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x18172fcb0, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Assembly*  element, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x18172f5c0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::MemberInfo*  element) ;

/// @brief Method GetCustomAttributes, addr 0x18172fdf0, size 0x1d0, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::MemberInfo*  element, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x18172f780, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::MemberInfo*  element, ::System::Type*  type) ;

/// @brief Method GetCustomAttributes, addr 0x18172f960, size 0x220, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::MemberInfo*  element, ::System::Type*  type, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x18172fb80, size 0x130, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Module*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x18172f8c0, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::Module*  element, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x18172f5d0, size 0x1b0, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::ParameterInfo*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x18172f490, size 0x120, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> GetCustomAttributes(::System::Reflection::ParameterInfo*  element, bool  inherit) ;

/// @brief Method GetHashCode, addr 0x18172ffc0, size 0x110, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method InternalGetCustomAttributes, addr 0x1817300d0, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> InternalGetCustomAttributes(::System::Reflection::EventInfo*  element, ::System::Type*  type, bool  inherit) ;

/// @brief Method InternalGetCustomAttributes, addr 0x1817300d0, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> InternalGetCustomAttributes(::System::Reflection::PropertyInfo*  element, ::System::Type*  type, bool  inherit) ;

/// @brief Method InternalIsDefined, addr 0x18167e340, size 0x10, virtual false, abstract: false, final false
static inline bool InternalIsDefined(::System::Reflection::EventInfo*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method InternalIsDefined, addr 0x18167e340, size 0x10, virtual false, abstract: false, final false
static inline bool InternalIsDefined(::System::Reflection::PropertyInfo*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method InternalParamGetCustomAttributes, addr 0x181730120, size 0x3b0, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Attribute*> InternalParamGetCustomAttributes(::System::Reflection::ParameterInfo*  parameter, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method IsDefaultAttribute, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool IsDefaultAttribute() ;

/// @brief Method IsDefined, addr 0x1817304d0, size 0x10, virtual false, abstract: false, final false
static inline bool IsDefined(::System::Reflection::MemberInfo*  element, ::System::Type*  attributeType) ;

/// @brief Method IsDefined, addr 0x1817304e0, size 0x1c0, virtual false, abstract: false, final false
static inline bool IsDefined(::System::Reflection::MemberInfo*  element, ::System::Type*  attributeType, bool  inherit) ;

/// @brief Method Match, addr 0x1817306a0, size 0x20, virtual true, abstract: false, final false
inline bool Match(::System::Object*  obj) ;

static inline ::System::Attribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TypeId, addr 0x18172a060, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* get_TypeId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Attribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Attribute(Attribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Attribute(Attribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{383};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Attribute) == 0x10, "Size mismatch!");

} // namespace end def System

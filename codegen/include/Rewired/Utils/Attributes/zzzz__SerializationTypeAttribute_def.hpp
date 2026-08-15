#pragma once
// IWYU pragma private; include "Rewired/Utils/Attributes/SerializationTypeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationTypeAttribute)
namespace Rewired::Utils::Attributes {
struct SerializationTypeAttribute_SerializationType;
}
// Forward declare root types
namespace Rewired::Utils::Attributes {
struct SerializationTypeAttribute_SerializationType;
}
namespace Rewired::Utils::Attributes {
class SerializationTypeAttribute;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType);
MARK_REF_T(::Rewired::Utils::Attributes::SerializationTypeAttribute*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType, "Rewired.Utils.Attributes", "SerializationTypeAttribute/SerializationType");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Attributes::SerializationTypeAttribute*, "Rewired.Utils.Attributes", "SerializationTypeAttribute");
// Dependencies 
namespace Rewired::Utils::Attributes {
// Is value type: true
// CS Name: Rewired.Utils.Attributes.SerializationTypeAttribute/SerializationType
struct CORDL_TYPE SerializationTypeAttribute_SerializationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SerializationTypeAttribute_SerializationType_Unwrapped
enum struct __SerializationTypeAttribute_SerializationType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Object = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SerializationTypeAttribute_SerializationType_Unwrapped () const noexcept {
return static_cast<__SerializationTypeAttribute_SerializationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SerializationTypeAttribute_SerializationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SerializationTypeAttribute_SerializationType(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType const Default;

/// @brief Field Object value: I32(1)
static ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType const Object;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3089};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Utils::Attributes
// Dependencies Rewired.Utils.Attributes.SerializationTypeAttribute::SerializationType, System.Attribute
namespace Rewired::Utils::Attributes {
// Is value type: false
// CS Name: Rewired.Utils.Attributes.SerializationTypeAttribute
class CORDL_TYPE SerializationTypeAttribute : public ::System::Attribute {
public:
// Declarations
using SerializationType = ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType;

/// @brief Field _serializationType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__serializationType, put=__cordl_internal_set__serializationType)) ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType  _serializationType;

 __declspec(property(get=get_serializationType)) ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType  serializationType;

static inline ::Rewired::Utils::Attributes::SerializationTypeAttribute* New_ctor(::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType const& __cordl_internal_get__serializationType() const;

constexpr ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType& __cordl_internal_get__serializationType() ;

constexpr void __cordl_internal_set__serializationType(::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_serializationType, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType get_serializationType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializationTypeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializationTypeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationTypeAttribute(SerializationTypeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationTypeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationTypeAttribute(SerializationTypeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3090};

/// @brief Field _serializationType, offset: 0x10, size: 0x4, def value: None
 ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType  ____serializationType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Attributes::SerializationTypeAttribute, ____serializationType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Attributes::SerializationTypeAttribute) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Utils::Attributes

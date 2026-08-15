#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/FieldValidatorAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FieldValidatorAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class FieldValidatorAttribute;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*, "PlayEveryWare.EpicOnlineServices", "FieldValidatorAttribute");
// Dependencies System.Attribute
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.FieldValidatorAttribute
class CORDL_TYPE FieldValidatorAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Method FieldValueIsValid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool FieldValueIsValid(::System::Object*  toValidate, ::by_ref<::StringW>  configurationProblemMessage) ;

static inline ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FieldValidatorAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FieldValidatorAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FieldValidatorAttribute(FieldValidatorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FieldValidatorAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FieldValidatorAttribute(FieldValidatorAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18819};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices

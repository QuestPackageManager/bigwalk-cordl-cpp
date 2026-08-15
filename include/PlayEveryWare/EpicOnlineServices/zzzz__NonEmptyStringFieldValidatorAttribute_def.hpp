#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/NonEmptyStringFieldValidatorAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__FieldValidatorAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NonEmptyStringFieldValidatorAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class NonEmptyStringFieldValidatorAttribute;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute*, "PlayEveryWare.EpicOnlineServices", "NonEmptyStringFieldValidatorAttribute");
// Dependencies PlayEveryWare.EpicOnlineServices.FieldValidatorAttribute
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.NonEmptyStringFieldValidatorAttribute
class CORDL_TYPE NonEmptyStringFieldValidatorAttribute : public ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute {
public:
// Declarations
/// @brief Method FieldValueIsValid, addr 0x180541940, size 0xa0, virtual true, abstract: false, final false
inline bool FieldValueIsValid(::System::Object*  toValidate, ::by_ref<::StringW>  configurationProblemMessage) ;

static inline ::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NonEmptyStringFieldValidatorAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NonEmptyStringFieldValidatorAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NonEmptyStringFieldValidatorAttribute(NonEmptyStringFieldValidatorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NonEmptyStringFieldValidatorAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NonEmptyStringFieldValidatorAttribute(NonEmptyStringFieldValidatorAttribute const& ) = delete;

/// @brief Field FieldIsEmptyMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  FieldIsEmptyMessage{u"The field value is an empty string."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18822};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices

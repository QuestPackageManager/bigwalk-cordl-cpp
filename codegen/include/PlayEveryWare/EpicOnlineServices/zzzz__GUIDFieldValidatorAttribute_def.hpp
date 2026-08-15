#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/GUIDFieldValidatorAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__FieldValidatorAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GUIDFieldValidatorAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class GUIDFieldValidatorAttribute;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute*, "PlayEveryWare.EpicOnlineServices", "GUIDFieldValidatorAttribute");
// Dependencies PlayEveryWare.EpicOnlineServices.FieldValidatorAttribute
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.GUIDFieldValidatorAttribute
class CORDL_TYPE GUIDFieldValidatorAttribute : public ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute {
public:
// Declarations
/// @brief Method FieldValueIsValid, addr 0x180540660, size 0xd0, virtual true, abstract: false, final false
inline bool FieldValueIsValid(::System::Object*  toValidate, ::by_ref<::StringW>  configurationProblemMessage) ;

static inline ::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUIDFieldValidatorAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUIDFieldValidatorAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIDFieldValidatorAttribute(GUIDFieldValidatorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIDFieldValidatorAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIDFieldValidatorAttribute(GUIDFieldValidatorAttribute const& ) = delete;

/// @brief Field NotAGuidMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  NotAGuidMessage{u"The field value could not be parsed into a Guid."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18821};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices

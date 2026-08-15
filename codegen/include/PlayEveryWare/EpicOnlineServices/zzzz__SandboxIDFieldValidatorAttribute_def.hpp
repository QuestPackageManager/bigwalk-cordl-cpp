#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/SandboxIDFieldValidatorAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__FieldValidatorAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SandboxIDFieldValidatorAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class SandboxIDFieldValidatorAttribute;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute*, "PlayEveryWare.EpicOnlineServices", "SandboxIDFieldValidatorAttribute");
// Dependencies PlayEveryWare.EpicOnlineServices.FieldValidatorAttribute
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.SandboxIDFieldValidatorAttribute
class CORDL_TYPE SandboxIDFieldValidatorAttribute : public ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute {
public:
// Declarations
/// @brief Method FieldValueIsValid, addr 0x180546410, size 0xe0, virtual true, abstract: false, final false
inline bool FieldValueIsValid(::System::Object*  toValidate, ::by_ref<::StringW>  configurationProblemMessage) ;

static inline ::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SandboxIDFieldValidatorAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SandboxIDFieldValidatorAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SandboxIDFieldValidatorAttribute(SandboxIDFieldValidatorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SandboxIDFieldValidatorAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SandboxIDFieldValidatorAttribute(SandboxIDFieldValidatorAttribute const& ) = delete;

/// @brief Field FieldDidNotMatchMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  FieldDidNotMatchMessage{u"The field value is not a GUID, and did not match the regex used for Pre Production Environments: \'^p\\-[a-zA-Z\\d]{30}$\'."};

/// @brief Field PreProductionEnvironmentRegex offset 0xffffffff size 0x8
static constexpr ::ConstString  PreProductionEnvironmentRegex{u"^p\\-[a-zA-Z\\d]{30}$"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18824};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices

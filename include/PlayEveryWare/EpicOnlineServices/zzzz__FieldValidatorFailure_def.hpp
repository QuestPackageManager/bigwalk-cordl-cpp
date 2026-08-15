#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/FieldValidatorFailure.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FieldValidatorFailure)
namespace PlayEveryWare::EpicOnlineServices {
class FieldValidatorAttribute;
}
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
struct FieldValidatorFailure;
}
// Write type traits
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure, "PlayEveryWare.EpicOnlineServices", "FieldValidatorFailure");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.FieldValidatorFailure
struct CORDL_TYPE FieldValidatorFailure {
public:
// Declarations
/// @brief Method .ctor, addr 0x18053eeb0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Reflection::FieldInfo*  failingField, ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*  failingAttribute, ::StringW  failingMessage) ;

// Ctor Parameters []
// @brief default ctor
constexpr FieldValidatorFailure() ;

// Ctor Parameters [CppParam { name: "FieldInfo", ty: "::System::Reflection::FieldInfo*", modifiers: "", def_value: None }, CppParam { name: "FailingAttribute", ty: "::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*", modifiers: "", def_value: None }, CppParam { name: "FailingMessage", ty: "::StringW", modifiers: "", def_value: None }]
constexpr FieldValidatorFailure(::System::Reflection::FieldInfo*  FieldInfo, ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*  FailingAttribute, ::StringW  FailingMessage) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18817};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field FieldInfo, offset: 0x0, size: 0x8, def value: None
 ::System::Reflection::FieldInfo*  FieldInfo;

/// @brief Field FailingAttribute, offset: 0x8, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*  FailingAttribute;

/// @brief Field FailingMessage, offset: 0x10, size: 0x8, def value: None
 ::StringW  FailingMessage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure, FieldInfo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure, FailingAttribute) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure, FailingMessage) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure) == 0x18, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices

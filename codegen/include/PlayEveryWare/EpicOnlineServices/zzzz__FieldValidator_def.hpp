#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/FieldValidator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FieldValidator)
namespace PlayEveryWare::EpicOnlineServices {
struct FieldValidatorFailure;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class FieldValidator;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::FieldValidator*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::FieldValidator*, "PlayEveryWare.EpicOnlineServices", "FieldValidator");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.FieldValidator
class CORDL_TYPE FieldValidator : public ::System::Object {
public:
// Declarations
/// @brief Method GetFailingValidatorAttributeOnClass, addr 0x18053ef50, size 0xe0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>* GetFailingValidatorAttributeOnClass(::System::Object*  target) ;

/// @brief Method GetFailingValidatorAttributeOnField, addr 0x18053f030, size 0x200, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>* GetFailingValidatorAttributeOnField(::System::Reflection::FieldInfo*  fieldInfo, ::System::Object*  fieldValue) ;

/// @brief Method GetFailingValidatorAttributeOnObject, addr 0x18053f230, size 0x300, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>* GetFailingValidatorAttributeOnObject(::System::Reflection::FieldInfo*  fieldInfo, ::System::Object*  singularValue) ;

static inline ::PlayEveryWare::EpicOnlineServices::FieldValidator* New_ctor() ;

/// @brief Method TryGetFailingValidatorAttributes, addr 0x18053f530, size 0x90, virtual false, abstract: false, final false
static inline bool TryGetFailingValidatorAttributes(::System::Object*  target, ::by_ref<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>*>  failingValidatorAttributes) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FieldValidator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FieldValidator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FieldValidator(FieldValidator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FieldValidator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FieldValidator(FieldValidator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18818};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::FieldValidator) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices

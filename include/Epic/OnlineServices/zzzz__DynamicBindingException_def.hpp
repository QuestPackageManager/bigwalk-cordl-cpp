#pragma once
// IWYU pragma private; include "Epic/OnlineServices/DynamicBindingException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DynamicBindingException)
// Forward declare root types
namespace Epic::OnlineServices {
class DynamicBindingException;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::DynamicBindingException*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::DynamicBindingException*, "Epic.OnlineServices", "DynamicBindingException");
// Dependencies System.Exception
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.DynamicBindingException
class CORDL_TYPE DynamicBindingException : public ::System::Exception {
public:
// Declarations
static inline ::Epic::OnlineServices::DynamicBindingException* New_ctor(::StringW  bindingName) ;

/// @brief Method .ctor, addr 0x1804d8760, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  bindingName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicBindingException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicBindingException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicBindingException(DynamicBindingException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBindingException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicBindingException(DynamicBindingException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7436};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::DynamicBindingException) == 0x90, "Size mismatch!");

} // namespace end def Epic::OnlineServices

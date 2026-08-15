#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AllocationException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AllocationException)
// Forward declare root types
namespace Epic::OnlineServices {
class AllocationException;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::AllocationException*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AllocationException*, "Epic.OnlineServices", "AllocationException");
// Dependencies System.Exception
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.AllocationException
class CORDL_TYPE AllocationException : public ::System::Exception {
public:
// Declarations
static inline ::Epic::OnlineServices::AllocationException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x1804be150, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AllocationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AllocationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AllocationException(AllocationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AllocationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AllocationException(AllocationException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7432};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::AllocationException) == 0x90, "Size mismatch!");

} // namespace end def Epic::OnlineServices

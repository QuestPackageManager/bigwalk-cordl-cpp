#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CachedArrayAllocationException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__AllocationException_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CachedArrayAllocationException)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices {
class CachedArrayAllocationException;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::CachedArrayAllocationException*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CachedArrayAllocationException*, "Epic.OnlineServices", "CachedArrayAllocationException");
// Dependencies Epic.OnlineServices.AllocationException
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.CachedArrayAllocationException
class CORDL_TYPE CachedArrayAllocationException : public ::Epic::OnlineServices::AllocationException {
public:
// Declarations
static inline ::Epic::OnlineServices::CachedArrayAllocationException* New_ctor(::System::IntPtr  pointer, int32_t  foundLength, int32_t  expectedLength) ;

/// @brief Method .ctor, addr 0x1804d6b80, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  pointer, int32_t  foundLength, int32_t  expectedLength) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CachedArrayAllocationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CachedArrayAllocationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CachedArrayAllocationException(CachedArrayAllocationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachedArrayAllocationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachedArrayAllocationException(CachedArrayAllocationException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7435};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::CachedArrayAllocationException) == 0x90, "Size mismatch!");

} // namespace end def Epic::OnlineServices

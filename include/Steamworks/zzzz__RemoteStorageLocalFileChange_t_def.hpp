#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageLocalFileChange_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStorageLocalFileChange_t)
// Forward declare root types
namespace Steamworks {
struct RemoteStorageLocalFileChange_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::RemoteStorageLocalFileChange_t);
DEFINE_IL2CPP_CLASS(::Steamworks::RemoteStorageLocalFileChange_t, "Steamworks", "RemoteStorageLocalFileChange_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.RemoteStorageLocalFileChange_t
#pragma pack(push, 8)
struct CORDL_TYPE RemoteStorageLocalFileChange_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RemoteStorageLocalFileChange_t() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16179};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x535)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Steamworks::RemoteStorageLocalFileChange_t) == 0x1, "Size mismatch!");

} // namespace end def Steamworks

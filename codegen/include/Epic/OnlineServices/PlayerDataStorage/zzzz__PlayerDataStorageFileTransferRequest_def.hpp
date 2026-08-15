#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/PlayerDataStorageFileTransferRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
CORDL_MODULE_EXPORT(PlayerDataStorageFileTransferRequest)
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
class PlayerDataStorageFileTransferRequest;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*, "Epic.OnlineServices.PlayerDataStorage", "PlayerDataStorageFileTransferRequest");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.PlayerDataStorage.PlayerDataStorageFileTransferRequest
class CORDL_TYPE PlayerDataStorageFileTransferRequest : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CancelRequest, addr 0x1804fd190, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CancelRequest() ;

/// @brief Method GetFileRequestState, addr 0x1804fd1a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetFileRequestState() ;

/// @brief Method GetFilename, addr 0x1804fd1b0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetFilename(::by_ref<::Epic::OnlineServices::Utf8String*>  outStringBuffer) ;

static inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* New_ctor() ;

static inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x1804fd230, size 0x10, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerDataStorageFileTransferRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataStorageFileTransferRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerDataStorageFileTransferRequest(PlayerDataStorageFileTransferRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataStorageFileTransferRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerDataStorageFileTransferRequest(PlayerDataStorageFileTransferRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8317};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage

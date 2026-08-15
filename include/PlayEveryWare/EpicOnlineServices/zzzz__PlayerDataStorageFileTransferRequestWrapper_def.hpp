#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/PlayerDataStorageFileTransferRequestWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__FileRequestTransferWrapper_1_def.hpp"
CORDL_MODULE_EXPORT(PlayerDataStorageFileTransferRequestWrapper)
namespace Epic::OnlineServices::PlayerDataStorage {
class PlayerDataStorageFileTransferRequest;
}
namespace Epic::OnlineServices {
struct Result;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class PlayerDataStorageFileTransferRequestWrapper;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper*, "PlayEveryWare.EpicOnlineServices", "PlayerDataStorageFileTransferRequestWrapper");
// Dependencies PlayEveryWare.EpicOnlineServices.FileRequestTransferWrapper`1<T>
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.PlayerDataStorageFileTransferRequestWrapper
class CORDL_TYPE PlayerDataStorageFileTransferRequestWrapper : public ::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*> {
public:
// Declarations
/// @brief Method CancelRequest, addr 0x180544db0, size 0x40, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::Result CancelRequest() ;

static inline ::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper* New_ctor(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*  instance) ;

/// @brief Method Release, addr 0x180544df0, size 0x40, virtual true, abstract: false, final false
inline void Release() ;

/// @brief Method .ctor, addr 0x180544e30, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*  instance) ;

/// @brief Method op_Implicit, addr 0x180544e40, size 0x40, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper* op_Implicit___PlayEveryWare__EpicOnlineServices__PlayerDataStorageFileTransferRequestWrapper_(::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageFileTransferRequest*  instance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerDataStorageFileTransferRequestWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataStorageFileTransferRequestWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerDataStorageFileTransferRequestWrapper(PlayerDataStorageFileTransferRequestWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataStorageFileTransferRequestWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerDataStorageFileTransferRequestWrapper(PlayerDataStorageFileTransferRequestWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18889};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::PlayerDataStorageFileTransferRequestWrapper) == 0x20, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices

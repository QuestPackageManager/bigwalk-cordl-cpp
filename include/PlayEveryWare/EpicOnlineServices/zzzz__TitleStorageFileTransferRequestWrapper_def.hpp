#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/TitleStorageFileTransferRequestWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__FileRequestTransferWrapper_1_def.hpp"
CORDL_MODULE_EXPORT(TitleStorageFileTransferRequestWrapper)
namespace Epic::OnlineServices::TitleStorage {
class TitleStorageFileTransferRequest;
}
namespace Epic::OnlineServices {
struct Result;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class TitleStorageFileTransferRequestWrapper;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper*, "PlayEveryWare.EpicOnlineServices", "TitleStorageFileTransferRequestWrapper");
// Dependencies PlayEveryWare.EpicOnlineServices.FileRequestTransferWrapper`1<T>
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.TitleStorageFileTransferRequestWrapper
class CORDL_TYPE TitleStorageFileTransferRequestWrapper : public ::PlayEveryWare::EpicOnlineServices::FileRequestTransferWrapper_1<::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*> {
public:
// Declarations
/// @brief Method CancelRequest, addr 0x180547580, size 0x40, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::Result CancelRequest() ;

static inline ::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper* New_ctor(::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*  instance) ;

/// @brief Method Release, addr 0x1805475c0, size 0x40, virtual true, abstract: false, final false
inline void Release() ;

/// @brief Method .ctor, addr 0x180544e30, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*  instance) ;

/// @brief Method op_Implicit, addr 0x180547600, size 0x40, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper* op_Implicit___PlayEveryWare__EpicOnlineServices__TitleStorageFileTransferRequestWrapper_(::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*  instance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleStorageFileTransferRequestWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleStorageFileTransferRequestWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleStorageFileTransferRequestWrapper(TitleStorageFileTransferRequestWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleStorageFileTransferRequestWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleStorageFileTransferRequestWrapper(TitleStorageFileTransferRequestWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18890};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::TitleStorageFileTransferRequestWrapper) == 0x20, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/TitleStorageFileTransferRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
CORDL_MODULE_EXPORT(TitleStorageFileTransferRequest)
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
namespace Epic::OnlineServices::TitleStorage {
class TitleStorageFileTransferRequest;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest*, "Epic.OnlineServices.TitleStorage", "TitleStorageFileTransferRequest");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::TitleStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.TitleStorage.TitleStorageFileTransferRequest
class CORDL_TYPE TitleStorageFileTransferRequest : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CancelRequest, addr 0x1804e1770, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CancelRequest() ;

/// @brief Method GetFileRequestState, addr 0x1804e17f0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetFileRequestState() ;

/// @brief Method GetFilename, addr 0x1804e1870, size 0x100, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetFilename(::by_ref<::Epic::OnlineServices::Utf8String*>  outStringBuffer) ;

static inline ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest* New_ctor() ;

static inline ::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x1804e1970, size 0x80, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleStorageFileTransferRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleStorageFileTransferRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleStorageFileTransferRequest(TitleStorageFileTransferRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleStorageFileTransferRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleStorageFileTransferRequest(TitleStorageFileTransferRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7638};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::TitleStorage::TitleStorageFileTransferRequest) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage

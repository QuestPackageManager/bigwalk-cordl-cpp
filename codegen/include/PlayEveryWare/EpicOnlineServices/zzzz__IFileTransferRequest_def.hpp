#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IFileTransferRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFileTransferRequest)
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class IFileTransferRequest;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::IFileTransferRequest*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::IFileTransferRequest*, "PlayEveryWare.EpicOnlineServices", "IFileTransferRequest");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.IFileTransferRequest
class CORDL_TYPE IFileTransferRequest {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CancelRequest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::Result CancelRequest() ;

/// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Release() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IFileTransferRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFileTransferRequest(IFileTransferRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18888};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices

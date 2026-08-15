#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/AddNotifyPeerConnectionRequestOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AddNotifyPeerConnectionRequestOptions)
namespace Epic::OnlineServices::P2P {
struct SocketId;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct AddNotifyPeerConnectionRequestOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions, "Epic.OnlineServices.P2P", "AddNotifyPeerConnectionRequestOptions");
// Dependencies Epic.OnlineServices.P2P.SocketId, System.Nullable`1<T>
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.AddNotifyPeerConnectionRequestOptions
struct CORDL_TYPE AddNotifyPeerConnectionRequestOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_SocketId, put=set_SocketId)) ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  SocketId;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_SocketId, addr 0x18052c9a0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId> get_SocketId() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_SocketId, addr 0x18052c9c0, size 0x30, virtual false, abstract: false, final false
inline void set_SocketId(::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyPeerConnectionRequestOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_SocketId_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>", modifiers: "", def_value: None }]
constexpr AddNotifyPeerConnectionRequestOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  _SocketId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9539};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <SocketId>k__BackingField, offset: 0x8, size: 0x28, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  _SocketId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions, _SocketId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P

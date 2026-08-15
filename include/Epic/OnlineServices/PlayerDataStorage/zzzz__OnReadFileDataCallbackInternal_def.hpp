#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnReadFileDataCallbackInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnReadFileDataCallbackInternal)
namespace Epic::OnlineServices::PlayerDataStorage {
struct ReadFileDataCallbackInfoInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct ReadResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
class OnReadFileDataCallbackInternal;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*, "Epic.OnlineServices.PlayerDataStorage", "OnReadFileDataCallbackInternal");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.PlayerDataStorage.OnReadFileDataCallbackInternal
class CORDL_TYPE OnReadFileDataCallbackInternal : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804fadb0, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804de840, size 0xa0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::ReadResult EndInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::ReadResult Invoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804de8e0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnReadFileDataCallbackInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnReadFileDataCallbackInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnReadFileDataCallbackInternal(OnReadFileDataCallbackInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnReadFileDataCallbackInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnReadFileDataCallbackInternal(OnReadFileDataCallbackInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8309};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnReadFileDataCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnReadFileDataCallback)
namespace Epic::OnlineServices::PlayerDataStorage {
struct ReadFileDataCallbackInfo;
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
class OnReadFileDataCallback;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback*, "Epic.OnlineServices.PlayerDataStorage", "OnReadFileDataCallback");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.PlayerDataStorage.OnReadFileDataCallback
class CORDL_TYPE OnReadFileDataCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804fae10, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804de840, size 0xa0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::ReadResult EndInvoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::ReadResult Invoke(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfo>  data) ;

static inline ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804de8e0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnReadFileDataCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnReadFileDataCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnReadFileDataCallback(OnReadFileDataCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnReadFileDataCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnReadFileDataCallback(OnReadFileDataCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8308};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallback) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage

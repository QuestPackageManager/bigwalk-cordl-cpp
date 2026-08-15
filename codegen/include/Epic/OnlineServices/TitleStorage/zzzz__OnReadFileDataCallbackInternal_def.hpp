#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/OnReadFileDataCallbackInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnReadFileDataCallbackInternal)
namespace Epic::OnlineServices::TitleStorage {
struct ReadFileDataCallbackInfoInternal;
}
namespace Epic::OnlineServices::TitleStorage {
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
namespace Epic::OnlineServices::TitleStorage {
class OnReadFileDataCallbackInternal;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternal*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternal*, "Epic.OnlineServices.TitleStorage", "OnReadFileDataCallbackInternal");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::TitleStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.TitleStorage.OnReadFileDataCallbackInternal
class CORDL_TYPE OnReadFileDataCallbackInternal : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804de7e0, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804de840, size 0xa0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::TitleStorage::ReadResult EndInvoke(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfoInternal>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline ::Epic::OnlineServices::TitleStorage::ReadResult Invoke(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileDataCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternal* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7621};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::TitleStorage::OnReadFileDataCallbackInternal) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage

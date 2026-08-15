#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PresenceInterface)
namespace Epic::OnlineServices::Presence {
struct AddNotifyJoinGameAcceptedOptions;
}
namespace Epic::OnlineServices::Presence {
struct AddNotifyOnPresenceChangedOptions;
}
namespace Epic::OnlineServices::Presence {
struct CopyPresenceOptions;
}
namespace Epic::OnlineServices::Presence {
struct CreatePresenceModificationOptions;
}
namespace Epic::OnlineServices::Presence {
struct GetJoinInfoOptions;
}
namespace Epic::OnlineServices::Presence {
struct HasPresenceOptions;
}
namespace Epic::OnlineServices::Presence {
struct Info;
}
namespace Epic::OnlineServices::Presence {
class OnJoinGameAcceptedCallback;
}
namespace Epic::OnlineServices::Presence {
class OnPresenceChangedCallback;
}
namespace Epic::OnlineServices::Presence {
class OnQueryPresenceCompleteCallback;
}
namespace Epic::OnlineServices::Presence {
class PresenceModification;
}
namespace Epic::OnlineServices::Presence {
struct QueryPresenceOptions;
}
namespace Epic::OnlineServices::Presence {
class SetPresenceCompleteCallback;
}
namespace Epic::OnlineServices::Presence {
struct SetPresenceOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
class PresenceInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Presence::PresenceInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceInterface*, "Epic.OnlineServices.Presence", "PresenceInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Presence {
// Is value type: false
// CS Name: Epic.OnlineServices.Presence.PresenceInterface
class CORDL_TYPE PresenceInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Field KEY_PLATFORM_PRESENCE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_KEY_PLATFORM_PRESENCE, put=setStaticF_KEY_PLATFORM_PRESENCE)) ::Epic::OnlineServices::Utf8String*  KEY_PLATFORM_PRESENCE;

/// @brief Method AddNotifyJoinGameAccepted, addr 0x1804fe550, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyJoinGameAccepted(::by_ref<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallback*  notificationFn) ;

/// @brief Method AddNotifyOnPresenceChanged, addr 0x1804fe740, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyOnPresenceChanged(::by_ref<::Epic::OnlineServices::Presence::AddNotifyOnPresenceChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Presence::OnPresenceChangedCallback*  notificationHandler) ;

/// @brief Method CopyPresence, addr 0x1804fe930, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyPresence(::by_ref<::Epic::OnlineServices::Presence::CopyPresenceOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Presence::Info>>  outPresence) ;

/// @brief Method CreatePresenceModification, addr 0x1804fea10, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CreatePresenceModification(::by_ref<::Epic::OnlineServices::Presence::CreatePresenceModificationOptions>  options, ::by_ref<::Epic::OnlineServices::Presence::PresenceModification*>  outPresenceModificationHandle) ;

/// @brief Method GetJoinInfo, addr 0x1804feab0, size 0xf0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetJoinInfo(::by_ref<::Epic::OnlineServices::Presence::GetJoinInfoOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method HasPresence, addr 0x1804feba0, size 0xb0, virtual false, abstract: false, final false
inline bool HasPresence(::by_ref<::Epic::OnlineServices::Presence::HasPresenceOptions>  options) ;

static inline ::Epic::OnlineServices::Presence::PresenceInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Presence::PresenceInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryPresence, addr 0x1804fec50, size 0x230, virtual false, abstract: false, final false
inline void QueryPresence(::by_ref<::Epic::OnlineServices::Presence::QueryPresenceOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallback*  completionDelegate) ;

/// @brief Method RemoveNotifyJoinGameAccepted, addr 0x1804fee80, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyJoinGameAccepted(uint64_t  inId) ;

/// @brief Method RemoveNotifyOnPresenceChanged, addr 0x1804feeb0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyOnPresenceChanged(uint64_t  notificationId) ;

/// @brief Method SetPresence, addr 0x1804feee0, size 0x230, virtual false, abstract: false, final false
inline void SetPresence(::by_ref<::Epic::OnlineServices::Presence::SetPresenceOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_KEY_PLATFORM_PRESENCE() ;

static inline void setStaticF_KEY_PLATFORM_PRESENCE(::Epic::OnlineServices::Utf8String*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PresenceInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PresenceInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PresenceInterface(PresenceInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PresenceInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PresenceInterface(PresenceInterface const& ) = delete;

/// @brief Field ADDNOTIFYJOINGAMEACCEPTED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYJOINGAMEACCEPTED_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field ADDNOTIFYONPRESENCECHANGED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYONPRESENCECHANGED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYPRESENCE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYPRESENCE_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field CREATEPRESENCEMODIFICATION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CREATEPRESENCEMODIFICATION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DATARECORD_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DATARECORD_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DATA_MAX_KEYS offset 0xffffffff size 0x4
static constexpr int32_t  DATA_MAX_KEYS{static_cast<int32_t>(0x20)};

/// @brief Field DATA_MAX_KEY_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  DATA_MAX_KEY_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field DATA_MAX_VALUE_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  DATA_MAX_VALUE_LENGTH{static_cast<int32_t>(0xff)};

/// @brief Field DELETEDATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DELETEDATA_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETJOININFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETJOININFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field HASPRESENCE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  HASPRESENCE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field INFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  INFO_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field PRESENCEMODIFICATION_DATARECORDID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PRESENCEMODIFICATION_DATARECORDID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PRESENCEMODIFICATION_DELETEDATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PRESENCEMODIFICATION_DELETEDATA_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PRESENCEMODIFICATION_JOININFO_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  PRESENCEMODIFICATION_JOININFO_MAX_LENGTH{static_cast<int32_t>(0xff)};

/// @brief Field PRESENCEMODIFICATION_SETDATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PRESENCEMODIFICATION_SETDATA_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PRESENCEMODIFICATION_SETJOININFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PRESENCEMODIFICATION_SETJOININFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PRESENCEMODIFICATION_SETRAWRICHTEXT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PRESENCEMODIFICATION_SETRAWRICHTEXT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PRESENCEMODIFICATION_SETSTATUS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PRESENCEMODIFICATION_SETSTATUS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PRESENCEMODIFICATION_SETTEMPLATEDATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PRESENCEMODIFICATION_SETTEMPLATEDATA_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PRESENCEMODIFICATION_SETTEMPLATEID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PRESENCEMODIFICATION_SETTEMPLATEID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYPRESENCE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYPRESENCE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field RICH_TEXT_MAX_VALUE_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  RICH_TEXT_MAX_VALUE_LENGTH{static_cast<int32_t>(0xff)};

/// @brief Field SETDATA_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETDATA_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETPRESENCE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETPRESENCE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETRAWRICHTEXT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETRAWRICHTEXT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field SETSTATUS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETSTATUS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8232};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence

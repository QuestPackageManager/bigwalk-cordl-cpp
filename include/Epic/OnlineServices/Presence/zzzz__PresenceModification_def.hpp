#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
CORDL_MODULE_EXPORT(PresenceModification)
namespace Epic::OnlineServices::Presence {
struct PresenceModificationDeleteDataOptions;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetDataOptions;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetJoinInfoOptions;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetRawRichTextOptions;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetStatusOptions;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetTemplateDataOptions;
}
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetTemplateIdOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
class PresenceModification;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Presence::PresenceModification*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModification*, "Epic.OnlineServices.Presence", "PresenceModification");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Presence {
// Is value type: false
// CS Name: Epic.OnlineServices.Presence.PresenceModification
class CORDL_TYPE PresenceModification : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method DeleteData, addr 0x1804ff670, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result DeleteData(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationDeleteDataOptions>  options) ;

static inline ::Epic::OnlineServices::Presence::PresenceModification* New_ctor() ;

static inline ::Epic::OnlineServices::Presence::PresenceModification* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x1804ff6f0, size 0x10, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method SetData, addr 0x1804ff700, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetData(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>  options) ;

/// @brief Method SetJoinInfo, addr 0x1804ff780, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetJoinInfo(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions>  options) ;

/// @brief Method SetRawRichText, addr 0x1804ff7f0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetRawRichText(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>  options) ;

/// @brief Method SetStatus, addr 0x1804ff860, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetStatus(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>  options) ;

/// @brief Method SetTemplateData, addr 0x1804ff8a0, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetTemplateData(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>  options) ;

/// @brief Method SetTemplateId, addr 0x1804ff8f0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetTemplateId(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateIdOptions>  options) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PresenceModification() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PresenceModification", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PresenceModification(PresenceModification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PresenceModification", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PresenceModification(PresenceModification const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8233};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModification) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetTemplateDataOptionsValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationTemplateType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PresenceModificationSetTemplateDataOptionsValue)
namespace Epic::OnlineServices::Presence {
struct PresenceModificationTemplateType;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetTemplateDataOptionsValue;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue, "Epic.OnlineServices.Presence", "PresenceModificationSetTemplateDataOptionsValue");
// Dependencies Epic.OnlineServices.Presence.PresenceModificationTemplateType, System.Nullable`1<T>
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationSetTemplateDataOptionsValue
struct CORDL_TYPE PresenceModificationSetTemplateDataOptionsValue {
public:
// Declarations
 __declspec(property(get=get_AsInt32, put=set_AsInt32)) ::System::Nullable_1<int32_t>  AsInt32;

 __declspec(property(get=get_AsStringId, put=set_AsStringId)) ::Epic::OnlineServices::Utf8String*  AsStringId;

 __declspec(property(get=get_ValueType)) ::Epic::OnlineServices::Presence::PresenceModificationTemplateType  ValueType;

/// @brief Method get_AsInt32, addr 0x1804ff480, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_AsInt32() ;

/// @brief Method get_AsStringId, addr 0x1804ff4a0, size 0x20, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AsStringId() ;

/// @brief Method get_ValueType, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Presence::PresenceModificationTemplateType get_ValueType() ;

/// @brief Method op_Implicit, addr 0x1804ff530, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue op_Implicit___Epic__OnlineServices__Presence__PresenceModificationSetTemplateDataOptionsValue(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method op_Implicit, addr 0x1804ff4c0, size 0x50, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue op_Implicit___Epic__OnlineServices__Presence__PresenceModificationSetTemplateDataOptionsValue(::StringW  value) ;

/// @brief Method op_Implicit, addr 0x1804ff510, size 0x20, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue op_Implicit___Epic__OnlineServices__Presence__PresenceModificationSetTemplateDataOptionsValue(::System::Nullable_1<int32_t>  value) ;

/// @brief Method set_AsInt32, addr 0x1804ff560, size 0x20, virtual false, abstract: false, final false
inline void set_AsInt32(::System::Nullable_1<int32_t>  value) ;

/// @brief Method set_AsStringId, addr 0x1804ff580, size 0xf0, virtual false, abstract: false, final false
inline void set_AsStringId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationSetTemplateDataOptionsValue() ;

// Ctor Parameters [CppParam { name: "m_AsInt32", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_AsStringId", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "m_ValueType", ty: "::Epic::OnlineServices::Presence::PresenceModificationTemplateType", modifiers: "", def_value: None }]
constexpr PresenceModificationSetTemplateDataOptionsValue(::System::Nullable_1<int32_t>  m_AsInt32, ::Epic::OnlineServices::Utf8String*  m_AsStringId, ::Epic::OnlineServices::Presence::PresenceModificationTemplateType  m_ValueType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8248};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_AsInt32, offset: 0x0, size: 0x8, def value: None
 ::System::Nullable_1<int32_t>  m_AsInt32;

/// @brief Field m_AsStringId, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  m_AsStringId;

/// @brief Field m_ValueType, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Presence::PresenceModificationTemplateType  m_ValueType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue, m_AsInt32) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue, m_AsStringId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue, m_ValueType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence

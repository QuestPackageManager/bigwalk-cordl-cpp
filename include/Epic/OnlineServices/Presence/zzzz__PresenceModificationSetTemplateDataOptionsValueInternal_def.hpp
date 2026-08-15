#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetTemplateDataOptionsValueInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PresenceModificationSetTemplateDataOptionsValueInternal)
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetTemplateDataOptionsValue;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetTemplateDataOptionsValueInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal, "Epic.OnlineServices.Presence", "PresenceModificationSetTemplateDataOptionsValueInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationSetTemplateDataOptionsValueInternal
struct CORDL_TYPE PresenceModificationSetTemplateDataOptionsValueInternal {
public:
// Declarations
/// @brief Field m_AsInt32, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AsInt32, put=__cordl_internal_set_m_AsInt32)) int32_t  m_AsInt32;

/// @brief Field m_AsStringId, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AsStringId, put=__cordl_internal_set_m_AsStringId)) ::System::IntPtr  m_AsStringId;

/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804ff400, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804ff420, size 0x60, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>  other) ;

constexpr int32_t const& __cordl_internal_get_m_AsInt32() const;

constexpr int32_t& __cordl_internal_get_m_AsInt32() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_AsStringId() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_AsStringId() ;

constexpr void __cordl_internal_set_m_AsInt32(int32_t  value) ;

constexpr void __cordl_internal_set_m_AsStringId(::System::IntPtr  value) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__PresenceModificationSetTemplateDataOptionsValue_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationSetTemplateDataOptionsValueInternal() ;

// Ctor Parameters [CppParam { name: "m_AsInt32", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AsStringId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr PresenceModificationSetTemplateDataOptionsValueInternal(int32_t  m_AsInt32, ::System::IntPtr  m_AsStringId) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_AsInt32_padding[0x0];
/// @brief Field m_AsInt32, offset: 0x0, size: 0x4, def value: None
 int32_t  ___m_AsInt32;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_AsInt32_padding_forAlignment[0x0];
/// @brief Field m_AsInt32, offset: 0x0, size: 0x4, def value: None
 int32_t  ___m_AsInt32_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_AsStringId_padding[0x0];
/// @brief Field m_AsStringId, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_AsStringId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_AsStringId_padding_forAlignment[0x0];
/// @brief Field m_AsStringId, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_AsStringId_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8249};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValueInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence

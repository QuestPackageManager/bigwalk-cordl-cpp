#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/BeginPlayerSessionOptionsAccountIdInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BeginPlayerSessionOptionsAccountIdInternal)
namespace Epic::OnlineServices::Metrics {
struct BeginPlayerSessionOptionsAccountId;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Metrics {
struct BeginPlayerSessionOptionsAccountIdInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal, "Epic.OnlineServices.Metrics", "BeginPlayerSessionOptionsAccountIdInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Metrics {
// Is value type: true
// CS Name: Epic.OnlineServices.Metrics.BeginPlayerSessionOptionsAccountIdInternal
struct CORDL_TYPE BeginPlayerSessionOptionsAccountIdInternal {
public:
// Declarations
/// @brief Field m_Epic, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Epic, put=__cordl_internal_set_m_Epic)) ::System::IntPtr  m_Epic;

/// @brief Field m_External, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_External, put=__cordl_internal_set_m_External)) ::System::IntPtr  m_External;

/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1805042b0, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1805042e0, size 0x70, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>  other) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Epic() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Epic() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_External() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_External() ;

constexpr void __cordl_internal_set_m_Epic(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_External(::System::IntPtr  value) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr BeginPlayerSessionOptionsAccountIdInternal() ;

// Ctor Parameters [CppParam { name: "m_Epic", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_External", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr BeginPlayerSessionOptionsAccountIdInternal(::System::IntPtr  m_Epic, ::System::IntPtr  m_External) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_Epic_padding[0x0];
/// @brief Field m_Epic, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_Epic;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_Epic_padding_forAlignment[0x0];
/// @brief Field m_Epic, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_Epic_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_External_padding[0x0];
/// @brief Field m_External, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_External;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_External_padding_forAlignment[0x0];
/// @brief Field m_External, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___m_External_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8409};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Metrics

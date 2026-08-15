#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/AttributeDataInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__AttributeDataValueInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__AttributeType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeDataInternal)
namespace Epic::OnlineServices::Lobby {
struct AttributeData;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct AttributeDataInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::AttributeDataInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::AttributeDataInternal, "Epic.OnlineServices.Lobby", "AttributeDataInternal");
// Dependencies Epic.OnlineServices.AttributeType, Epic.OnlineServices.Lobby.AttributeDataValueInternal, System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.AttributeDataInternal
struct CORDL_TYPE AttributeDataInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::AttributeData>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::AttributeData>*() ;

/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeData>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeData>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804ff310, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Get, addr 0x180503de0, size 0xd0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Lobby::AttributeData>  other) ;

/// @brief Method Set, addr 0x180503eb0, size 0xf0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::AttributeData>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::AttributeData>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::AttributeData>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__AttributeData_() ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeData>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeData>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__AttributeData_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AttributeDataInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "::Epic::OnlineServices::Lobby::AttributeDataValueInternal", modifiers: "", def_value: None }, CppParam { name: "m_ValueType", ty: "::Epic::OnlineServices::AttributeType", modifiers: "", def_value: None }]
constexpr AttributeDataInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Key, ::Epic::OnlineServices::Lobby::AttributeDataValueInternal  m_Value, ::Epic::OnlineServices::AttributeType  m_ValueType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8448};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Key, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Key;

/// @brief Field m_Value, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Lobby::AttributeDataValueInternal  m_Value;

/// @brief Field m_ValueType, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::AttributeType  m_ValueType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::AttributeDataInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::AttributeDataInternal, m_Key) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::AttributeDataInternal, m_Value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::AttributeDataInternal, m_ValueType) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::AttributeDataInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby

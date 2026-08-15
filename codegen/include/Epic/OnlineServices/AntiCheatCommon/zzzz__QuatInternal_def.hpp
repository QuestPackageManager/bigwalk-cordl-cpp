#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/QuatInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(QuatInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct Quat;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct QuatInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::QuatInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::QuatInternal, "Epic.OnlineServices.AntiCheatCommon", "QuatInternal");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.QuatInternal
struct CORDL_TYPE QuatInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18052b340, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::Quat>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__Quat_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QuatInternal() ;

// Ctor Parameters [CppParam { name: "m_w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_z", ty: "float_t", modifiers: "", def_value: None }]
constexpr QuatInternal(float_t  m_w, float_t  m_x, float_t  m_y, float_t  m_z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9381};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_w, offset: 0x0, size: 0x4, def value: None
 float_t  m_w;

/// @brief Field m_x, offset: 0x4, size: 0x4, def value: None
 float_t  m_x;

/// @brief Field m_y, offset: 0x8, size: 0x4, def value: None
 float_t  m_y;

/// @brief Field m_z, offset: 0xc, size: 0x4, def value: None
 float_t  m_z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::QuatInternal, m_w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::QuatInternal, m_x) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::QuatInternal, m_y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::QuatInternal, m_z) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::QuatInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon

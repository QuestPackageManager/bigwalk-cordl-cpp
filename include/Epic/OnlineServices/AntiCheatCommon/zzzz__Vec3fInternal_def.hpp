#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/Vec3fInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Vec3fInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct Vec3f;
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
struct Vec3fInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal, "Epic.OnlineServices.AntiCheatCommon", "Vec3fInternal");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.Vec3fInternal
struct CORDL_TYPE Vec3fInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18052c270, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__Vec3f_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Vec3fInternal() ;

// Ctor Parameters [CppParam { name: "m_x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_z", ty: "float_t", modifiers: "", def_value: None }]
constexpr Vec3fInternal(float_t  m_x, float_t  m_y, float_t  m_z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9391};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field m_x, offset: 0x0, size: 0x4, def value: None
 float_t  m_x;

/// @brief Field m_y, offset: 0x4, size: 0x4, def value: None
 float_t  m_y;

/// @brief Field m_z, offset: 0x8, size: 0x4, def value: None
 float_t  m_z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal, m_x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal, m_y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal, m_z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal) == 0xc, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon

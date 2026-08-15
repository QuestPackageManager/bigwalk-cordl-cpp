#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/RegisterEventParamDefInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventParamType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RegisterEventParamDefInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct RegisterEventParamDef;
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
struct RegisterEventParamDefInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal, "Epic.OnlineServices.AntiCheatCommon", "RegisterEventParamDefInternal");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonEventParamType, System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.RegisterEventParamDefInternal
struct CORDL_TYPE RegisterEventParamDefInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804ff400, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18052b830, size 0x110, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__RegisterEventParamDef_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr RegisterEventParamDefInternal() ;

// Ctor Parameters [CppParam { name: "m_ParamName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ParamType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType", modifiers: "", def_value: None }]
constexpr RegisterEventParamDefInternal(::System::IntPtr  m_ParamName, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  m_ParamType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9385};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ParamName, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ParamName;

/// @brief Field m_ParamType, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  m_ParamType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal, m_ParamName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal, m_ParamType) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon

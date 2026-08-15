#pragma once
// IWYU pragma private; include "Rewired/Localization/LocalizedStringProviderBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalizedStringProviderBase)
namespace Rewired::Interfaces {
class ILocalizedStringProvider;
}
// Forward declare root types
namespace Rewired::Localization {
class LocalizedStringProviderBase;
}
// Write type traits
MARK_REF_T(::Rewired::Localization::LocalizedStringProviderBase*);
DEFINE_IL2CPP_CLASS(::Rewired::Localization::LocalizedStringProviderBase*, "Rewired.Localization", "LocalizedStringProviderBase");
// Dependencies UnityEngine.MonoBehaviour
namespace Rewired::Localization {
// Is value type: false
// CS Name: Rewired.Localization.LocalizedStringProviderBase
class CORDL_TYPE LocalizedStringProviderBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _prefetch, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__prefetch, put=__cordl_internal_set__prefetch)) bool  _prefetch;

 __declspec(property(get=get_initialized)) bool  initialized;

 __declspec(property(get=get_prefetch, put=set_prefetch)) bool  prefetch;

/// @brief Convert operator to "::Rewired::Interfaces::ILocalizedStringProvider"
constexpr operator  ::Rewired::Interfaces::ILocalizedStringProvider*() noexcept;

/// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Initialize() ;

static inline ::Rewired::Localization::LocalizedStringProviderBase* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803aad20, size 0xd0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803aadf0, size 0x60, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reload, addr 0x1803aae50, size 0xe0, virtual true, abstract: false, final false
inline void Reload() ;

/// @brief Method Rewired.Interfaces.ILocalizedStringProvider.TryGetLocalizedString, addr 0x1803aaf30, size 0x20, virtual true, abstract: false, final true
inline bool Rewired_Interfaces_ILocalizedStringProvider_TryGetLocalizedString(::StringW  key, ::by_ref<::StringW>  result) ;

/// @brief Method TryGetLocalizedString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGetLocalizedString(::StringW  key, ::by_ref<::StringW>  result) ;

/// @brief Method TrySetLocalizedStringProvider, addr 0x1803aaf50, size 0x140, virtual true, abstract: false, final false
inline void TrySetLocalizedStringProvider() ;

/// @brief Method Update, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__prefetch() const;

constexpr bool& __cordl_internal_get__prefetch() ;

constexpr void __cordl_internal_set__prefetch(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_initialized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_initialized() ;

/// @brief Method get_prefetch, addr 0x1803a7410, size 0x10, virtual true, abstract: false, final false
inline bool get_prefetch() ;

/// @brief Convert to "::Rewired::Interfaces::ILocalizedStringProvider"
constexpr ::Rewired::Interfaces::ILocalizedStringProvider* i___Rewired__Interfaces__ILocalizedStringProvider() noexcept;

/// @brief Method set_prefetch, addr 0x1803ab090, size 0xd0, virtual true, abstract: false, final false
inline void set_prefetch(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedStringProviderBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedStringProviderBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedStringProviderBase(LocalizedStringProviderBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedStringProviderBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedStringProviderBase(LocalizedStringProviderBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5707};

/// @brief Field _prefetch, offset: 0x20, size: 0x1, def value: None
 bool  ____prefetch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Localization::LocalizedStringProviderBase, ____prefetch) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Localization::LocalizedStringProviderBase) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Localization

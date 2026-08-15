#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/SpinLock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpinLock)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
class SpinLock;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Utility::SpinLock*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::SpinLock*, "Rewired.Utils.Classes.Utility", "SpinLock");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.SpinLock
class CORDL_TYPE SpinLock : public ::System::Object {
public:
// Declarations
/// @brief Field kxYNRilzHelzvFcAHjLDhKFaOSxBb, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_kxYNRilzHelzvFcAHjLDhKFaOSxBb, put=__cordl_internal_set_kxYNRilzHelzvFcAHjLDhKFaOSxBb)) int32_t  kxYNRilzHelzvFcAHjLDhKFaOSxBb;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method GKCuGlBuXgIJRYZeMTuiXQXelZTn, addr 0x18193b340, size 0x10, virtual false, abstract: false, final false
inline void GKCuGlBuXgIJRYZeMTuiXQXelZTn() ;

/// @brief Method Lock, addr 0x18193b350, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Utility::SpinLock* Lock() ;

static inline ::Rewired::Utils::Classes::Utility::SpinLock* New_ctor() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18193b340, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_kxYNRilzHelzvFcAHjLDhKFaOSxBb() const;

constexpr int32_t& __cordl_internal_get_kxYNRilzHelzvFcAHjLDhKFaOSxBb() ;

constexpr void __cordl_internal_set_kxYNRilzHelzvFcAHjLDhKFaOSxBb(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method uJJEfUBkBvVIOlJGmpyfgvaMdMVV, addr 0x18193b3b0, size 0x50, virtual false, abstract: false, final false
inline void uJJEfUBkBvVIOlJGmpyfgvaMdMVV() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpinLock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpinLock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpinLock(SpinLock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpinLock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpinLock(SpinLock const& ) = delete;

/// @brief Field OwzDnyrNUfLXjgJbSDJZuCqOsqWO offset 0xffffffff size 0x4
static constexpr int32_t  OwzDnyrNUfLXjgJbSDJZuCqOsqWO{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2974};

/// @brief Field snmExWvweBIjIeBQBLnKdIsYrdxs offset 0xffffffff size 0x4
static constexpr int32_t  snmExWvweBIjIeBQBLnKdIsYrdxs{static_cast<int32_t>(0x1)};

/// @brief Field kxYNRilzHelzvFcAHjLDhKFaOSxBb, offset: 0x10, size: 0x4, def value: None
 int32_t  ___kxYNRilzHelzvFcAHjLDhKFaOSxBb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Utility::SpinLock, ___kxYNRilzHelzvFcAHjLDhKFaOSxBb) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Utility::SpinLock) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility

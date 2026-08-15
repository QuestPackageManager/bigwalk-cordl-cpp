#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/NativeMemoryBlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeMemoryBlock)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
class NativeMemoryBlock;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Data::NativeMemoryBlock*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::NativeMemoryBlock*, "Rewired.Utils.Classes.Data", "NativeMemoryBlock");
// Dependencies System.IntPtr, System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.NativeMemoryBlock
class CORDL_TYPE NativeMemoryBlock : public ::System::Object {
public:
// Declarations
/// @brief Field YAvipBsCnPeRnksngiHCkYWMazLDA, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_YAvipBsCnPeRnksngiHCkYWMazLDA, put=__cordl_internal_set_YAvipBsCnPeRnksngiHCkYWMazLDA)) uint32_t  YAvipBsCnPeRnksngiHCkYWMazLDA;

/// @brief Field iAMAShnGnDcCYpqoBAuNmYQfPuQO, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_iAMAShnGnDcCYpqoBAuNmYQfPuQO, put=__cordl_internal_set_iAMAShnGnDcCYpqoBAuNmYQfPuQO)) int32_t  iAMAShnGnDcCYpqoBAuNmYQfPuQO;

/// @brief Field ivFazYBybvTTfTcdWLckHcNrKlTeb, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ivFazYBybvTTfTcdWLckHcNrKlTeb, put=__cordl_internal_set_ivFazYBybvTTfTcdWLckHcNrKlTeb)) ::System::IntPtr  ivFazYBybvTTfTcdWLckHcNrKlTeb;

 __declspec(property(get=get_size)) uint32_t  size;

/// @brief Field wFJGfJSLoNoNivKuIahFbaqHHBEK, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_wFJGfJSLoNoNivKuIahFbaqHHBEK, put=__cordl_internal_set_wFJGfJSLoNoNivKuIahFbaqHHBEK)) bool  wFJGfJSLoNoNivKuIahFbaqHHBEK;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Allocate, addr 0x1819563d0, size 0x80, virtual false, abstract: false, final false
inline ::System::IntPtr Allocate(uint32_t  bytes) ;

/// @brief Method Allocate, addr 0x181956450, size 0xc0, virtual false, abstract: false, final false
inline ::System::IntPtr Allocate(uint32_t  bytes, ::System::IntPtr  ptrToData) ;

/// @brief Method Dispose, addr 0x180e6eca0, size 0x5510, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x181956510, size 0x40, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x1815bcac0, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Rewired::Utils::Classes::Data::NativeMemoryBlock* New_ctor(uint32_t  _cordl_fixed_empty_name_whitespace) ;

constexpr uint32_t const& __cordl_internal_get_YAvipBsCnPeRnksngiHCkYWMazLDA() const;

constexpr uint32_t& __cordl_internal_get_YAvipBsCnPeRnksngiHCkYWMazLDA() ;

constexpr int32_t const& __cordl_internal_get_iAMAShnGnDcCYpqoBAuNmYQfPuQO() const;

constexpr int32_t& __cordl_internal_get_iAMAShnGnDcCYpqoBAuNmYQfPuQO() ;

constexpr ::System::IntPtr const& __cordl_internal_get_ivFazYBybvTTfTcdWLckHcNrKlTeb() const;

constexpr ::System::IntPtr& __cordl_internal_get_ivFazYBybvTTfTcdWLckHcNrKlTeb() ;

constexpr bool const& __cordl_internal_get_wFJGfJSLoNoNivKuIahFbaqHHBEK() const;

constexpr bool& __cordl_internal_get_wFJGfJSLoNoNivKuIahFbaqHHBEK() ;

constexpr void __cordl_internal_set_YAvipBsCnPeRnksngiHCkYWMazLDA(uint32_t  value) ;

constexpr void __cordl_internal_set_iAMAShnGnDcCYpqoBAuNmYQfPuQO(int32_t  value) ;

constexpr void __cordl_internal_set_ivFazYBybvTTfTcdWLckHcNrKlTeb(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_wFJGfJSLoNoNivKuIahFbaqHHBEK(bool  value) ;

/// @brief Method .ctor, addr 0x181956550, size 0x70, virtual false, abstract: false, final false
inline void _ctor(uint32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_size, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_size() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeMemoryBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeMemoryBlock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeMemoryBlock(NativeMemoryBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeMemoryBlock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeMemoryBlock(NativeMemoryBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3036};

/// @brief Field iAMAShnGnDcCYpqoBAuNmYQfPuQO, offset: 0x10, size: 0x4, def value: None
 int32_t  ___iAMAShnGnDcCYpqoBAuNmYQfPuQO;

/// @brief Field YAvipBsCnPeRnksngiHCkYWMazLDA, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___YAvipBsCnPeRnksngiHCkYWMazLDA;

/// @brief Field ivFazYBybvTTfTcdWLckHcNrKlTeb, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___ivFazYBybvTTfTcdWLckHcNrKlTeb;

/// @brief Field wFJGfJSLoNoNivKuIahFbaqHHBEK, offset: 0x20, size: 0x1, def value: None
 bool  ___wFJGfJSLoNoNivKuIahFbaqHHBEK;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeMemoryBlock, ___iAMAShnGnDcCYpqoBAuNmYQfPuQO) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeMemoryBlock, ___YAvipBsCnPeRnksngiHCkYWMazLDA) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeMemoryBlock, ___ivFazYBybvTTfTcdWLckHcNrKlTeb) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeMemoryBlock, ___wFJGfJSLoNoNivKuIahFbaqHHBEK) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::NativeMemoryBlock) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data

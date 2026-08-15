#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/NativeRingBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeRingBuffer)
namespace Rewired::Utils::Classes::Data {
class NativeBuffer;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
class NativeRingBuffer;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Data::NativeRingBuffer*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::NativeRingBuffer*, "Rewired.Utils.Classes.Data", "NativeRingBuffer");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.NativeRingBuffer
class CORDL_TYPE NativeRingBuffer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BufferOverrun)) bool  BufferOverrun;

 __declspec(property(get=get_BytesInBuffer)) int32_t  BytesInBuffer;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

/// @brief Field EjWlQTwRVkbOioKtlAJpxjGRfEeo, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_EjWlQTwRVkbOioKtlAJpxjGRfEeo, put=__cordl_internal_set_EjWlQTwRVkbOioKtlAJpxjGRfEeo)) int32_t  EjWlQTwRVkbOioKtlAJpxjGRfEeo;

 __declspec(property(get=get_ReadPosition)) int32_t  ReadPosition;

/// @brief Field TglyhmLhikuUEXRoBqZOEQhpkgjr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TglyhmLhikuUEXRoBqZOEQhpkgjr, put=__cordl_internal_set_TglyhmLhikuUEXRoBqZOEQhpkgjr)) ::Rewired::Utils::Classes::Data::NativeBuffer*  TglyhmLhikuUEXRoBqZOEQhpkgjr;

/// @brief Field VcrBaEzmHCyjEIxAdsOPPIFGbYkgA, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_VcrBaEzmHCyjEIxAdsOPPIFGbYkgA, put=__cordl_internal_set_VcrBaEzmHCyjEIxAdsOPPIFGbYkgA)) uint32_t  VcrBaEzmHCyjEIxAdsOPPIFGbYkgA;

/// @brief Field WfgFMWPpRhQOJESPNACiPbEuLFab, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_WfgFMWPpRhQOJESPNACiPbEuLFab, put=__cordl_internal_set_WfgFMWPpRhQOJESPNACiPbEuLFab)) bool  WfgFMWPpRhQOJESPNACiPbEuLFab;

 __declspec(property(get=get_WritePosition)) int64_t  WritePosition;

/// @brief Field iwGEXNwmJxhtxniEBygGhphiXgbD, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_iwGEXNwmJxhtxniEBygGhphiXgbD, put=__cordl_internal_set_iwGEXNwmJxhtxniEBygGhphiXgbD)) int32_t  iwGEXNwmJxhtxniEBygGhphiXgbD;

/// @brief Field kEZcUPvnHDtboRPNoSSxlKEcfqP, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_kEZcUPvnHDtboRPNoSSxlKEcfqP, put=__cordl_internal_set_kEZcUPvnHDtboRPNoSSxlKEcfqP)) int64_t  kEZcUPvnHDtboRPNoSSxlKEcfqP;

/// @brief Field yIeJDGuPPNcisSewhgPggZRmtRGS, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_yIeJDGuPPNcisSewhgPggZRmtRGS, put=__cordl_internal_set_yIeJDGuPPNcisSewhgPggZRmtRGS)) int64_t  yIeJDGuPPNcisSewhgPggZRmtRGS;

/// @brief Field yziciHOkVxpunXWKJCkRsKmaKCcf, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_yziciHOkVxpunXWKJCkRsKmaKCcf, put=__cordl_internal_set_yziciHOkVxpunXWKJCkRsKmaKCcf)) bool  yziciHOkVxpunXWKJCkRsKmaKCcf;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Allocate, addr 0x1819565c0, size 0x100, virtual false, abstract: false, final false
inline ::System::IntPtr Allocate(int32_t  bufferLength, bool  zeroFill, ::by_ref<uint32_t>  passId) ;

/// @brief Method CopyFrom, addr 0x1819566c0, size 0xd0, virtual false, abstract: false, final false
inline void CopyFrom(::Rewired::Utils::Classes::Data::NativeRingBuffer*  other) ;

/// @brief Method Dispose, addr 0x181956790, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x1819567f0, size 0x60, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x181956850, size 0x10, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetOffsetFromReadPosition, addr 0x181956860, size 0x30, virtual false, abstract: false, final false
inline int32_t GetOffsetFromReadPosition(int32_t  offset) ;

/// @brief Method GetPointerFromReadPosition, addr 0x181956890, size 0x80, virtual false, abstract: false, final false
inline ::System::IntPtr GetPointerFromReadPosition(int32_t  offset) ;

/// @brief Method IsValid, addr 0x181956910, size 0x30, virtual false, abstract: false, final false
inline bool IsValid(int32_t  startIndex, uint32_t  passId) ;

static inline ::Rewired::Utils::Classes::Data::NativeRingBuffer* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RandomRead, addr 0x181956a60, size 0x190, virtual false, abstract: false, final false
inline int32_t RandomRead(::ArrayW<uint8_t>  buffer, int32_t  numBytesToRead, int32_t  readStartIndex) ;

/// @brief Method RandomRead, addr 0x181956940, size 0x120, virtual false, abstract: false, final false
inline int32_t RandomRead(::System::IntPtr  buffer, int32_t  bufferLength, int32_t  numBytesToRead, int32_t  readStartIndex) ;

/// @brief Method Read, addr 0x181956bf0, size 0x190, virtual false, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  numBytesToRead) ;

/// @brief Method Read, addr 0x181956d80, size 0x130, virtual false, abstract: false, final false
inline int32_t Read(::System::IntPtr  buffer, int32_t  bufferLength, int32_t  numBytesToRead) ;

/// @brief Method Reset, addr 0x181956eb0, size 0x20, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Write, addr 0x181957340, size 0x30, virtual false, abstract: false, final false
inline int32_t Write(::ArrayW<uint8_t>  buffer, int32_t  numBytesToWrite) ;

/// @brief Method Write, addr 0x1819571c0, size 0x180, virtual false, abstract: false, final false
inline int32_t Write(::ArrayW<uint8_t>  buffer, int32_t  numBytesToWrite, ::by_ref<int32_t>  startOffset, ::by_ref<uint32_t>  passId) ;

/// @brief Method Write, addr 0x181956ed0, size 0x160, virtual false, abstract: false, final false
inline int32_t Write(::System::IntPtr  buffer, int32_t  bufferLength, int32_t  numBytesToWrite) ;

/// @brief Method Write, addr 0x181957030, size 0x190, virtual false, abstract: false, final false
inline int32_t Write(::System::IntPtr  buffer, int32_t  bufferLength, int32_t  numBytesToWrite, ::by_ref<int32_t>  startOffset, ::by_ref<uint32_t>  passId) ;

/// @brief Method ZjKKFmuWUbhjahEADdwsQzQkUztt, addr 0x181957370, size 0x50, virtual false, abstract: false, final false
inline void ZjKKFmuWUbhjahEADdwsQzQkUztt(int32_t  _cordl_fixed_empty_name_whitespace) ;

constexpr int32_t const& __cordl_internal_get_EjWlQTwRVkbOioKtlAJpxjGRfEeo() const;

constexpr int32_t& __cordl_internal_get_EjWlQTwRVkbOioKtlAJpxjGRfEeo() ;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& __cordl_internal_get_TglyhmLhikuUEXRoBqZOEQhpkgjr() const;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& __cordl_internal_get_TglyhmLhikuUEXRoBqZOEQhpkgjr() ;

constexpr uint32_t const& __cordl_internal_get_VcrBaEzmHCyjEIxAdsOPPIFGbYkgA() const;

constexpr uint32_t& __cordl_internal_get_VcrBaEzmHCyjEIxAdsOPPIFGbYkgA() ;

constexpr bool const& __cordl_internal_get_WfgFMWPpRhQOJESPNACiPbEuLFab() const;

constexpr bool& __cordl_internal_get_WfgFMWPpRhQOJESPNACiPbEuLFab() ;

constexpr int32_t const& __cordl_internal_get_iwGEXNwmJxhtxniEBygGhphiXgbD() const;

constexpr int32_t& __cordl_internal_get_iwGEXNwmJxhtxniEBygGhphiXgbD() ;

constexpr int64_t const& __cordl_internal_get_kEZcUPvnHDtboRPNoSSxlKEcfqP() const;

constexpr int64_t& __cordl_internal_get_kEZcUPvnHDtboRPNoSSxlKEcfqP() ;

constexpr int64_t const& __cordl_internal_get_yIeJDGuPPNcisSewhgPggZRmtRGS() const;

constexpr int64_t& __cordl_internal_get_yIeJDGuPPNcisSewhgPggZRmtRGS() ;

constexpr bool const& __cordl_internal_get_yziciHOkVxpunXWKJCkRsKmaKCcf() const;

constexpr bool& __cordl_internal_get_yziciHOkVxpunXWKJCkRsKmaKCcf() ;

constexpr void __cordl_internal_set_EjWlQTwRVkbOioKtlAJpxjGRfEeo(int32_t  value) ;

constexpr void __cordl_internal_set_TglyhmLhikuUEXRoBqZOEQhpkgjr(::Rewired::Utils::Classes::Data::NativeBuffer*  value) ;

constexpr void __cordl_internal_set_VcrBaEzmHCyjEIxAdsOPPIFGbYkgA(uint32_t  value) ;

constexpr void __cordl_internal_set_WfgFMWPpRhQOJESPNACiPbEuLFab(bool  value) ;

constexpr void __cordl_internal_set_iwGEXNwmJxhtxniEBygGhphiXgbD(int32_t  value) ;

constexpr void __cordl_internal_set_kEZcUPvnHDtboRPNoSSxlKEcfqP(int64_t  value) ;

constexpr void __cordl_internal_set_yIeJDGuPPNcisSewhgPggZRmtRGS(int64_t  value) ;

constexpr void __cordl_internal_set_yziciHOkVxpunXWKJCkRsKmaKCcf(bool  value) ;

/// @brief Method .ctor, addr 0x1819573c0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_BufferOverrun, addr 0x1803e0b00, size 0x10, virtual false, abstract: false, final false
inline bool get_BufferOverrun() ;

/// @brief Method get_BytesInBuffer, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_BytesInBuffer() ;

/// @brief Method get_Capacity, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_ReadPosition, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ReadPosition() ;

/// @brief Method get_WritePosition, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline int64_t get_WritePosition() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method sVqdoRwZoQIkRKQjgMHcEwDzbTA, addr 0x181957430, size 0x20, virtual false, abstract: false, final false
inline void sVqdoRwZoQIkRKQjgMHcEwDzbTA() ;

/// @brief Method zsfaSoFgYhMWqeYGgsDBHjUSHidv, addr 0x181957450, size 0xb0, virtual false, abstract: false, final false
inline void zsfaSoFgYhMWqeYGgsDBHjUSHidv(int32_t  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeRingBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeRingBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeRingBuffer(NativeRingBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeRingBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeRingBuffer(NativeRingBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3035};

/// @brief Field TglyhmLhikuUEXRoBqZOEQhpkgjr, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::NativeBuffer*  ___TglyhmLhikuUEXRoBqZOEQhpkgjr;

/// @brief Field iwGEXNwmJxhtxniEBygGhphiXgbD, offset: 0x18, size: 0x4, def value: None
 int32_t  ___iwGEXNwmJxhtxniEBygGhphiXgbD;

/// @brief Field yIeJDGuPPNcisSewhgPggZRmtRGS, offset: 0x20, size: 0x8, def value: None
 int64_t  ___yIeJDGuPPNcisSewhgPggZRmtRGS;

/// @brief Field kEZcUPvnHDtboRPNoSSxlKEcfqP, offset: 0x28, size: 0x8, def value: None
 int64_t  ___kEZcUPvnHDtboRPNoSSxlKEcfqP;

/// @brief Field EjWlQTwRVkbOioKtlAJpxjGRfEeo, offset: 0x30, size: 0x4, def value: None
 int32_t  ___EjWlQTwRVkbOioKtlAJpxjGRfEeo;

/// @brief Field yziciHOkVxpunXWKJCkRsKmaKCcf, offset: 0x34, size: 0x1, def value: None
 bool  ___yziciHOkVxpunXWKJCkRsKmaKCcf;

/// @brief Field VcrBaEzmHCyjEIxAdsOPPIFGbYkgA, offset: 0x38, size: 0x4, def value: None
 uint32_t  ___VcrBaEzmHCyjEIxAdsOPPIFGbYkgA;

/// @brief Field WfgFMWPpRhQOJESPNACiPbEuLFab, offset: 0x3c, size: 0x1, def value: None
 bool  ___WfgFMWPpRhQOJESPNACiPbEuLFab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeRingBuffer, ___TglyhmLhikuUEXRoBqZOEQhpkgjr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeRingBuffer, ___iwGEXNwmJxhtxniEBygGhphiXgbD) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeRingBuffer, ___yIeJDGuPPNcisSewhgPggZRmtRGS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeRingBuffer, ___kEZcUPvnHDtboRPNoSSxlKEcfqP) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeRingBuffer, ___EjWlQTwRVkbOioKtlAJpxjGRfEeo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeRingBuffer, ___yziciHOkVxpunXWKJCkRsKmaKCcf) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeRingBuffer, ___VcrBaEzmHCyjEIxAdsOPPIFGbYkgA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeRingBuffer, ___WfgFMWPpRhQOJESPNACiPbEuLFab) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::NativeRingBuffer) == 0x40, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data

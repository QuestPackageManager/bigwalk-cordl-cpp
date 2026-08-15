#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/LowLevelInputEventQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__LowLevelInputEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LowLevelInputEventQueue)
namespace Rewired::Utils::Classes::Data {
class NativeRingBuffer;
}
namespace Rewired {
struct LowLevelInputEvent;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
class LowLevelInputEventQueue;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*, "Rewired.Utils.Classes.Utility", "LowLevelInputEventQueue");
// Dependencies Rewired.LowLevelInputEvent, System.Object
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.LowLevelInputEventQueue
class CORDL_TYPE LowLevelInputEventQueue : public ::System::Object {
public:
// Declarations
/// @brief Field AKoQKOBczmeWMcQAjbwJTEqjDEQV, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_AKoQKOBczmeWMcQAjbwJTEqjDEQV, put=__cordl_internal_set_AKoQKOBczmeWMcQAjbwJTEqjDEQV)) int32_t  AKoQKOBczmeWMcQAjbwJTEqjDEQV;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_CapacityBytes)) int32_t  CapacityBytes;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field FzjNqptsEZwrXopQDnqeNuJpXnik, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_FzjNqptsEZwrXopQDnqeNuJpXnik, put=__cordl_internal_set_FzjNqptsEZwrXopQDnqeNuJpXnik)) ::Rewired::Utils::Classes::Data::NativeRingBuffer*  FzjNqptsEZwrXopQDnqeNuJpXnik;

 __declspec(property(get=get_Item)) ::Rewired::LowLevelInputEvent  Item[];

/// @brief Field NlcsmDQUsJaGqevRkdaxJfvLPeRx, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_NlcsmDQUsJaGqevRkdaxJfvLPeRx, put=__cordl_internal_set_NlcsmDQUsJaGqevRkdaxJfvLPeRx)) int32_t  NlcsmDQUsJaGqevRkdaxJfvLPeRx;

/// @brief Field VFEExbTbmUXfIxCEagQWuVEJxngU, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_VFEExbTbmUXfIxCEagQWuVEJxngU, put=__cordl_internal_set_VFEExbTbmUXfIxCEagQWuVEJxngU)) int32_t  VFEExbTbmUXfIxCEagQWuVEJxngU;

/// @brief Field XuyEcckfxKOeZqibxFjBrvuhClBoA, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_XuyEcckfxKOeZqibxFjBrvuhClBoA, put=__cordl_internal_set_XuyEcckfxKOeZqibxFjBrvuhClBoA)) uint32_t  XuyEcckfxKOeZqibxFjBrvuhClBoA;

/// @brief Field ejMgbYIhEYLKqhfYgbDkxKwskTEKB, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_ejMgbYIhEYLKqhfYgbDkxKwskTEKB, put=__cordl_internal_set_ejMgbYIhEYLKqhfYgbDkxKwskTEKB)) int32_t  ejMgbYIhEYLKqhfYgbDkxKwskTEKB;

/// @brief Field rAiPTXfocmBVRbOApFDGwfYilOEHA, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get_rAiPTXfocmBVRbOApFDGwfYilOEHA, put=__cordl_internal_set_rAiPTXfocmBVRbOApFDGwfYilOEHA)) ::Rewired::LowLevelInputEvent  rAiPTXfocmBVRbOApFDGwfYilOEHA;

/// @brief Field rWDXwKBSunBDSSUXXIpkRyFHEOnu, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_rWDXwKBSunBDSSUXXIpkRyFHEOnu, put=__cordl_internal_set_rWDXwKBSunBDSSUXXIpkRyFHEOnu)) bool  rWDXwKBSunBDSSUXXIpkRyFHEOnu;

/// @brief Field wWiYGSloQAkiDiRVoPMJNemcCvjk, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_wWiYGSloQAkiDiRVoPMJNemcCvjk, put=__cordl_internal_set_wWiYGSloQAkiDiRVoPMJNemcCvjk)) int32_t  wWiYGSloQAkiDiRVoPMJNemcCvjk;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Clear, addr 0x181930300, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyAllFrom, addr 0x181930320, size 0x60, virtual false, abstract: false, final false
inline void CopyAllFrom(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*  other) ;

/// @brief Method CopyNewEventsFrom, addr 0x181930380, size 0x210, virtual false, abstract: false, final false
inline void CopyNewEventsFrom(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*  other) ;

/// @brief Method CreateEvent, addr 0x181930590, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::LowLevelInputEvent CreateEvent() ;

/// @brief Method Dispose, addr 0x181930630, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x181930670, size 0x40, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x1819306b0, size 0x10, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FindNextIndex, addr 0x1819306c0, size 0xd0, virtual false, abstract: false, final false
inline int32_t FindNextIndex(uint32_t  id) ;

static inline ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method TryGetNext, addr 0x181930790, size 0xc0, virtual false, abstract: false, final false
inline bool TryGetNext(int32_t  index, ::by_ref<::Rewired::LowLevelInputEvent>  event) ;

constexpr int32_t const& __cordl_internal_get_AKoQKOBczmeWMcQAjbwJTEqjDEQV() const;

constexpr int32_t& __cordl_internal_get_AKoQKOBczmeWMcQAjbwJTEqjDEQV() ;

constexpr ::Rewired::Utils::Classes::Data::NativeRingBuffer* const& __cordl_internal_get_FzjNqptsEZwrXopQDnqeNuJpXnik() const;

constexpr ::Rewired::Utils::Classes::Data::NativeRingBuffer*& __cordl_internal_get_FzjNqptsEZwrXopQDnqeNuJpXnik() ;

constexpr int32_t const& __cordl_internal_get_NlcsmDQUsJaGqevRkdaxJfvLPeRx() const;

constexpr int32_t& __cordl_internal_get_NlcsmDQUsJaGqevRkdaxJfvLPeRx() ;

constexpr int32_t const& __cordl_internal_get_VFEExbTbmUXfIxCEagQWuVEJxngU() const;

constexpr int32_t& __cordl_internal_get_VFEExbTbmUXfIxCEagQWuVEJxngU() ;

constexpr uint32_t const& __cordl_internal_get_XuyEcckfxKOeZqibxFjBrvuhClBoA() const;

constexpr uint32_t& __cordl_internal_get_XuyEcckfxKOeZqibxFjBrvuhClBoA() ;

constexpr int32_t const& __cordl_internal_get_ejMgbYIhEYLKqhfYgbDkxKwskTEKB() const;

constexpr int32_t& __cordl_internal_get_ejMgbYIhEYLKqhfYgbDkxKwskTEKB() ;

constexpr ::Rewired::LowLevelInputEvent const& __cordl_internal_get_rAiPTXfocmBVRbOApFDGwfYilOEHA() const;

constexpr ::Rewired::LowLevelInputEvent& __cordl_internal_get_rAiPTXfocmBVRbOApFDGwfYilOEHA() ;

constexpr bool const& __cordl_internal_get_rWDXwKBSunBDSSUXXIpkRyFHEOnu() const;

constexpr bool& __cordl_internal_get_rWDXwKBSunBDSSUXXIpkRyFHEOnu() ;

constexpr int32_t const& __cordl_internal_get_wWiYGSloQAkiDiRVoPMJNemcCvjk() const;

constexpr int32_t& __cordl_internal_get_wWiYGSloQAkiDiRVoPMJNemcCvjk() ;

constexpr void __cordl_internal_set_AKoQKOBczmeWMcQAjbwJTEqjDEQV(int32_t  value) ;

constexpr void __cordl_internal_set_FzjNqptsEZwrXopQDnqeNuJpXnik(::Rewired::Utils::Classes::Data::NativeRingBuffer*  value) ;

constexpr void __cordl_internal_set_NlcsmDQUsJaGqevRkdaxJfvLPeRx(int32_t  value) ;

constexpr void __cordl_internal_set_VFEExbTbmUXfIxCEagQWuVEJxngU(int32_t  value) ;

constexpr void __cordl_internal_set_XuyEcckfxKOeZqibxFjBrvuhClBoA(uint32_t  value) ;

constexpr void __cordl_internal_set_ejMgbYIhEYLKqhfYgbDkxKwskTEKB(int32_t  value) ;

constexpr void __cordl_internal_set_rAiPTXfocmBVRbOApFDGwfYilOEHA(::Rewired::LowLevelInputEvent  value) ;

constexpr void __cordl_internal_set_rWDXwKBSunBDSSUXXIpkRyFHEOnu(bool  value) ;

constexpr void __cordl_internal_set_wWiYGSloQAkiDiRVoPMJNemcCvjk(int32_t  value) ;

/// @brief Method .ctor, addr 0x181930850, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_Capacity, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_CapacityBytes, addr 0x181930930, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CapacityBytes() ;

/// @brief Method get_Count, addr 0x181930940, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x181930960, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::LowLevelInputEvent get_Item(int32_t  index) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LowLevelInputEventQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LowLevelInputEventQueue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LowLevelInputEventQueue(LowLevelInputEventQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelInputEventQueue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LowLevelInputEventQueue(LowLevelInputEventQueue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2983};

/// @brief Field rAiPTXfocmBVRbOApFDGwfYilOEHA, offset: 0x10, size: 0x20, def value: None
 ::Rewired::LowLevelInputEvent  ___rAiPTXfocmBVRbOApFDGwfYilOEHA;

/// @brief Field FzjNqptsEZwrXopQDnqeNuJpXnik, offset: 0x30, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::NativeRingBuffer*  ___FzjNqptsEZwrXopQDnqeNuJpXnik;

/// @brief Field AKoQKOBczmeWMcQAjbwJTEqjDEQV, offset: 0x38, size: 0x4, def value: None
 int32_t  ___AKoQKOBczmeWMcQAjbwJTEqjDEQV;

/// @brief Field VFEExbTbmUXfIxCEagQWuVEJxngU, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___VFEExbTbmUXfIxCEagQWuVEJxngU;

/// @brief Field NlcsmDQUsJaGqevRkdaxJfvLPeRx, offset: 0x40, size: 0x4, def value: None
 int32_t  ___NlcsmDQUsJaGqevRkdaxJfvLPeRx;

/// @brief Field wWiYGSloQAkiDiRVoPMJNemcCvjk, offset: 0x44, size: 0x4, def value: None
 int32_t  ___wWiYGSloQAkiDiRVoPMJNemcCvjk;

/// @brief Field ejMgbYIhEYLKqhfYgbDkxKwskTEKB, offset: 0x48, size: 0x4, def value: None
 int32_t  ___ejMgbYIhEYLKqhfYgbDkxKwskTEKB;

/// @brief Field XuyEcckfxKOeZqibxFjBrvuhClBoA, offset: 0x4c, size: 0x4, def value: None
 uint32_t  ___XuyEcckfxKOeZqibxFjBrvuhClBoA;

/// @brief Field rWDXwKBSunBDSSUXXIpkRyFHEOnu, offset: 0x50, size: 0x1, def value: None
 bool  ___rWDXwKBSunBDSSUXXIpkRyFHEOnu;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue, ___rAiPTXfocmBVRbOApFDGwfYilOEHA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue, ___FzjNqptsEZwrXopQDnqeNuJpXnik) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue, ___AKoQKOBczmeWMcQAjbwJTEqjDEQV) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue, ___VFEExbTbmUXfIxCEagQWuVEJxngU) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue, ___NlcsmDQUsJaGqevRkdaxJfvLPeRx) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue, ___wWiYGSloQAkiDiRVoPMJNemcCvjk) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue, ___ejMgbYIhEYLKqhfYgbDkxKwskTEKB) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue, ___XuyEcckfxKOeZqibxFjBrvuhClBoA) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue, ___rWDXwKBSunBDSSUXXIpkRyFHEOnu) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue) == 0x58, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility

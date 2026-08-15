#pragma once
// IWYU pragma private; include "Rewired/LowLevelInputEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LowLevelInputEvent)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Rewired {
struct LowLevelInputEvent;
}
// Write type traits
MARK_VAL_T(::Rewired::LowLevelInputEvent);
DEFINE_IL2CPP_CLASS(::Rewired::LowLevelInputEvent, "Rewired", "LowLevelInputEvent");
// Dependencies System.IntPtr
namespace Rewired {
// Is value type: true
// CS Name: Rewired.LowLevelInputEvent
struct CORDL_TYPE LowLevelInputEvent {
public:
// Declarations
 __declspec(property(get=get_axisCount)) int32_t  axisCount;

 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

 __declspec(property(get=get_byteIndex_axesStart)) int32_t  byteIndex_axesStart;

 __declspec(property(get=get_byteIndex_buttonsStart)) int32_t  byteIndex_buttonsStart;

 __declspec(property(get=get_byteIndex_hatsStart)) int32_t  byteIndex_hatsStart;

 __declspec(property(get=get_isValid)) bool  isValid;

/// @brief Method GetAxisValue, addr 0x1818452f0, size 0x60, virtual false, abstract: false, final false
inline float_t GetAxisValue(int32_t  index) ;

/// @brief Method GetButtonValue, addr 0x181845350, size 0x90, virtual false, abstract: false, final false
inline bool GetButtonValue(int32_t  index) ;

/// @brief Method GetButtonsBitMask, addr 0x1818453e0, size 0x60, virtual false, abstract: false, final false
inline int32_t GetButtonsBitMask(int32_t  startButtonIndex) ;

/// @brief Method GetId, addr 0x181845440, size 0x30, virtual false, abstract: false, final false
inline uint32_t GetId() ;

/// @brief Method GetReportSize, addr 0x181845470, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetReportSize(int32_t  buttonCount, int32_t  axisCount, int32_t  hatCount) ;

/// @brief Method GetTimestamp, addr 0x1818454a0, size 0x60, virtual false, abstract: false, final false
inline double_t GetTimestamp() ;

/// @brief Method SetAxisValue, addr 0x181845500, size 0x70, virtual false, abstract: false, final false
inline void SetAxisValue(int32_t  index, float_t  value) ;

/// @brief Method SetButtonsBitMask, addr 0x181845570, size 0x70, virtual false, abstract: false, final false
inline void SetButtonsBitMask(int32_t  bitMask, int32_t  startButtonIndex) ;

/// @brief Method SetId, addr 0x1818455e0, size 0x30, virtual false, abstract: false, final false
inline void SetId(uint32_t  id) ;

/// @brief Method SetTimestamp, addr 0x181845610, size 0x60, virtual false, abstract: false, final false
inline void SetTimestamp(double_t  value) ;

/// @brief Method .ctor, addr 0x181845670, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_axisCount, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_axisCount() ;

/// @brief Method get_buttonCount, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline int32_t get_buttonCount() ;

/// @brief Method get_byteIndex_axesStart, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_byteIndex_axesStart() ;

/// @brief Method get_byteIndex_buttonsStart, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_byteIndex_buttonsStart() ;

/// @brief Method get_byteIndex_hatsStart, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_byteIndex_hatsStart() ;

/// @brief Method get_isValid, addr 0x1802ff710, size 0x10, virtual false, abstract: false, final false
inline bool get_isValid() ;

// Ctor Parameters []
// @brief default ctor
constexpr LowLevelInputEvent() ;

// Ctor Parameters [CppParam { name: "_buffer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "HcrfhGVCoXHqXGcUhEyupeGVgIalA", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "FALIJnuKjqgFRTIUUlVIFdjBGToG", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hQExBjfRUvbVyJDBjrZazxEBsMHe", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "BYmaLSnavbXmYeXJepHyRsiNqkbf", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ZGXAHEoMqJdNjtDRwZqzJtoNABWS", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mRJYHTJaqiGJpcJETYyLnoqojRmu", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LowLevelInputEvent(::System::IntPtr  _buffer, int32_t  HcrfhGVCoXHqXGcUhEyupeGVgIalA, int32_t  FALIJnuKjqgFRTIUUlVIFdjBGToG, int32_t  hQExBjfRUvbVyJDBjrZazxEBsMHe, int32_t  BYmaLSnavbXmYeXJepHyRsiNqkbf, int32_t  ZGXAHEoMqJdNjtDRwZqzJtoNABWS, int32_t  mRJYHTJaqiGJpcJETYyLnoqojRmu) noexcept;

/// @brief Field HODhdCzMFVnUmReeAgklnWhKQhMk offset 0xffffffff size 0x4
static constexpr int32_t  HODhdCzMFVnUmReeAgklnWhKQhMk{static_cast<int32_t>(0x8)};

/// @brief Field XpiSwGVcrOIwwOvpCFaFAtJYgwgX offset 0xffffffff size 0x4
static constexpr int32_t  XpiSwGVcrOIwwOvpCFaFAtJYgwgX{static_cast<int32_t>(0xc)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1811};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field bhSwerEbxKPZUnGJARoRSCHWapiu offset 0xffffffff size 0x4
static constexpr int32_t  bhSwerEbxKPZUnGJARoRSCHWapiu{static_cast<int32_t>(0x4)};

/// @brief Field buttonsPerPage offset 0xffffffff size 0x4
static constexpr int32_t  buttonsPerPage{static_cast<int32_t>(0x20)};

/// @brief Field byteIndex_elementsStart offset 0xffffffff size 0x4
static constexpr int32_t  byteIndex_elementsStart{static_cast<int32_t>(0xc)};

/// @brief Field byteIndex_id offset 0xffffffff size 0x4
static constexpr int32_t  byteIndex_id{static_cast<int32_t>(0x0)};

/// @brief Field byteIndex_timestamp offset 0xffffffff size 0x4
static constexpr int32_t  byteIndex_timestamp{static_cast<int32_t>(0x4)};

/// @brief Field bytesPerButtonPage offset 0xffffffff size 0x4
static constexpr int32_t  bytesPerButtonPage{static_cast<int32_t>(0x4)};

/// @brief Field jaoHZahrVKfURepdSlSyfCDYeccCA offset 0xffffffff size 0x4
static constexpr int32_t  jaoHZahrVKfURepdSlSyfCDYeccCA{static_cast<int32_t>(0x4)};

/// @brief Field xlQQgoEQIcnWNbMJnIHOWkpncfNc offset 0xffffffff size 0x4
static constexpr int32_t  xlQQgoEQIcnWNbMJnIHOWkpncfNc{static_cast<int32_t>(0x4)};

/// @brief Field _buffer, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _buffer;

/// @brief Field HcrfhGVCoXHqXGcUhEyupeGVgIalA, offset: 0x8, size: 0x4, def value: None
 int32_t  HcrfhGVCoXHqXGcUhEyupeGVgIalA;

/// @brief Field FALIJnuKjqgFRTIUUlVIFdjBGToG, offset: 0xc, size: 0x4, def value: None
 int32_t  FALIJnuKjqgFRTIUUlVIFdjBGToG;

/// @brief Field hQExBjfRUvbVyJDBjrZazxEBsMHe, offset: 0x10, size: 0x4, def value: None
 int32_t  hQExBjfRUvbVyJDBjrZazxEBsMHe;

/// @brief Field BYmaLSnavbXmYeXJepHyRsiNqkbf, offset: 0x14, size: 0x4, def value: None
 int32_t  BYmaLSnavbXmYeXJepHyRsiNqkbf;

/// @brief Field ZGXAHEoMqJdNjtDRwZqzJtoNABWS, offset: 0x18, size: 0x4, def value: None
 int32_t  ZGXAHEoMqJdNjtDRwZqzJtoNABWS;

/// @brief Field mRJYHTJaqiGJpcJETYyLnoqojRmu, offset: 0x1c, size: 0x4, def value: None
 int32_t  mRJYHTJaqiGJpcJETYyLnoqojRmu;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::LowLevelInputEvent, _buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::LowLevelInputEvent, HcrfhGVCoXHqXGcUhEyupeGVgIalA) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::LowLevelInputEvent, FALIJnuKjqgFRTIUUlVIFdjBGToG) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Rewired::LowLevelInputEvent, hQExBjfRUvbVyJDBjrZazxEBsMHe) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::LowLevelInputEvent, BYmaLSnavbXmYeXJepHyRsiNqkbf) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::LowLevelInputEvent, ZGXAHEoMqJdNjtDRwZqzJtoNABWS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::LowLevelInputEvent, mRJYHTJaqiGJpcJETYyLnoqojRmu) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rewired::LowLevelInputEvent) == 0x20, "Size mismatch!");

} // namespace end def Rewired

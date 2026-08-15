#pragma once
// IWYU pragma private; include "Rewired/ButtonLoopSet.hpp"
#include "Rewired/zzzz__UpdateLoopDataSet_1_impl.hpp"
#include "Rewired/zzzz__UpdateLoopType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__ButtonLoopSet_def.hpp"
#include "Rewired/Config/zzzz__UpdateLoopSetting_def.hpp"
#include "Rewired/zzzz__ButtonLoopSet_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
//  Writing Method size for method: ::Rewired::ButtonLoopSet_ButtonData.get_effectiveValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::Rewired::ButtonLoopSet_ButtonData::*)()>(&::Rewired::ButtonLoopSet_ButtonData::get_effectiveValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181838720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {"get_effectiveValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ButtonLoopSet_ButtonData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ButtonLoopSet_ButtonData::*)(int32_t, ::Rewired::UpdateLoopType)>(&::Rewired::ButtonLoopSet_ButtonData::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181838620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::UpdateLoopType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ButtonLoopSet_ButtonData.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ButtonLoopSet_ButtonData::*)(int32_t, bool)>(&::Rewired::ButtonLoopSet_ButtonData::SetValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181838570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {"SetValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ButtonLoopSet_ButtonData.ClearWasTrueThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ButtonLoopSet_ButtonData::*)()>(&::Rewired::ButtonLoopSet_ButtonData::ClearWasTrueThisFrame)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818382e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {"ClearWasTrueThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ButtonLoopSet_ButtonData.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ButtonLoopSet_ButtonData::*)()>(&::Rewired::ButtonLoopSet_ButtonData::Clear)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181838360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ButtonLoopSet_ButtonData.Import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ButtonLoopSet_ButtonData::*)(::Rewired::ButtonLoopSet_ButtonData*)>(&::Rewired::ButtonLoopSet_ButtonData::Import)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181838450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {"Import", {}, {::i2c::type_of<::Rewired::ButtonLoopSet_ButtonData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ButtonLoopSet_ButtonData.ifgdqPrqRMEIyIuIIakFaqRCARAmA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ButtonLoopSet_ButtonData::*)()>(&::Rewired::ButtonLoopSet_ButtonData::ifgdqPrqRMEIyIuIIakFaqRCARAmA)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181838750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {"ifgdqPrqRMEIyIuIIakFaqRCARAmA", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::UpdateLoopType& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_updateLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateLoop;
}
constexpr ::Rewired::UpdateLoopType const& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_updateLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateLoop;
}
constexpr void Rewired::ButtonLoopSet_ButtonData::__cordl_internal_set_updateLoop(::Rewired::UpdateLoopType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateLoop = value;
}
constexpr ::ArrayW<bool>& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___values;
}
constexpr ::ArrayW<bool> const& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___values;
}
constexpr void Rewired::ButtonLoopSet_ButtonData::__cordl_internal_set_values(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___values = value;
}
constexpr ::ArrayW<bool>& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_wasTrueThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasTrueThisFrame;
}
constexpr ::ArrayW<bool> const& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_wasTrueThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasTrueThisFrame;
}
constexpr void Rewired::ButtonLoopSet_ButtonData::__cordl_internal_set_wasTrueThisFrame(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasTrueThisFrame = value;
}
constexpr ::ArrayW<bool>& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_FXMSmRcSdDrmrPmBDymxqsxoekrM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FXMSmRcSdDrmrPmBDymxqsxoekrM;
}
constexpr ::ArrayW<bool> const& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_FXMSmRcSdDrmrPmBDymxqsxoekrM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FXMSmRcSdDrmrPmBDymxqsxoekrM;
}
constexpr void Rewired::ButtonLoopSet_ButtonData::__cordl_internal_set_FXMSmRcSdDrmrPmBDymxqsxoekrM(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FXMSmRcSdDrmrPmBDymxqsxoekrM = value;
}
constexpr int32_t& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_XihaZNQkpUGgyulFnUOEZNmJACTA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XihaZNQkpUGgyulFnUOEZNmJACTA;
}
constexpr int32_t const& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_XihaZNQkpUGgyulFnUOEZNmJACTA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XihaZNQkpUGgyulFnUOEZNmJACTA;
}
constexpr void Rewired::ButtonLoopSet_ButtonData::__cordl_internal_set_XihaZNQkpUGgyulFnUOEZNmJACTA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XihaZNQkpUGgyulFnUOEZNmJACTA = value;
}
constexpr ::ArrayW<bool>& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_kpnJPAVPshKmiQxELfTlECdYEejr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kpnJPAVPshKmiQxELfTlECdYEejr;
}
constexpr ::ArrayW<bool> const& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_kpnJPAVPshKmiQxELfTlECdYEejr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kpnJPAVPshKmiQxELfTlECdYEejr;
}
constexpr void Rewired::ButtonLoopSet_ButtonData::__cordl_internal_set_kpnJPAVPshKmiQxELfTlECdYEejr(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kpnJPAVPshKmiQxELfTlECdYEejr = value;
}
constexpr ::ArrayW<bool>& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_aRbmNmmMYXiCpzYzvdbuvfZbSdAS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aRbmNmmMYXiCpzYzvdbuvfZbSdAS;
}
constexpr ::ArrayW<bool> const& Rewired::ButtonLoopSet_ButtonData::__cordl_internal_get_aRbmNmmMYXiCpzYzvdbuvfZbSdAS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aRbmNmmMYXiCpzYzvdbuvfZbSdAS;
}
constexpr void Rewired::ButtonLoopSet_ButtonData::__cordl_internal_set_aRbmNmmMYXiCpzYzvdbuvfZbSdAS(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aRbmNmmMYXiCpzYzvdbuvfZbSdAS = value;
}
inline ::ArrayW<bool> Rewired::ButtonLoopSet_ButtonData::get_effectiveValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {"get_effectiveValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
inline void Rewired::ButtonLoopSet_ButtonData::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::UpdateLoopType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ButtonLoopSet_ButtonData::SetValue(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {"SetValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Rewired::ButtonLoopSet_ButtonData::ClearWasTrueThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {"ClearWasTrueThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ButtonLoopSet_ButtonData::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ButtonLoopSet_ButtonData::Import(::Rewired::ButtonLoopSet_ButtonData*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {"Import", {}, {::i2c::type_of<::Rewired::ButtonLoopSet_ButtonData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Rewired::ButtonLoopSet_ButtonData::ifgdqPrqRMEIyIuIIakFaqRCARAmA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet_ButtonData*>(),
                        {"ifgdqPrqRMEIyIuIIakFaqRCARAmA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ButtonLoopSet_ButtonData* Rewired::ButtonLoopSet_ButtonData::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ButtonLoopSet_ButtonData*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::ButtonLoopSet_ButtonData::ButtonLoopSet_ButtonData()   {
}
//  Writing Method size for method: ::Rewired::ButtonLoopSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ButtonLoopSet::*)(::Rewired::Config::UpdateLoopSetting, int32_t)>(&::Rewired::ButtonLoopSet::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181838c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Config::UpdateLoopSetting>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ButtonLoopSet.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ButtonLoopSet::*)(int32_t, bool, double_t)>(&::Rewired::ButtonLoopSet::SetValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181838b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet*>(),
                        {"SetValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ButtonLoopSet.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ButtonLoopSet::*)()>(&::Rewired::ButtonLoopSet::Clear)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181838850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ButtonLoopSet.Import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ButtonLoopSet::*)(::Rewired::ButtonLoopSet*)>(&::Rewired::ButtonLoopSet::Import)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1818389a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet*>(),
                        {"Import", {}, {::i2c::type_of<::Rewired::ButtonLoopSet*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ButtonLoopSet::__cordl_internal_get_buttonCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonCount;
}
constexpr int32_t const& Rewired::ButtonLoopSet::__cordl_internal_get_buttonCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonCount;
}
constexpr void Rewired::ButtonLoopSet::__cordl_internal_set_buttonCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonCount = value;
}
inline void Rewired::ButtonLoopSet::_ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Config::UpdateLoopSetting>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ButtonLoopSet::SetValue(int32_t  index, bool  value, double_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet*>(),
                        {"SetValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value, timestamp);
}
inline void Rewired::ButtonLoopSet::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ButtonLoopSet::Import(::Rewired::ButtonLoopSet*  set)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ButtonLoopSet*>(),
                        {"Import", {}, {::i2c::type_of<::Rewired::ButtonLoopSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, set);
}
inline ::Rewired::ButtonLoopSet* Rewired::ButtonLoopSet::New_ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ButtonLoopSet*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::ButtonLoopSet::ButtonLoopSet()   {
}

#pragma once
// IWYU pragma private; include "Rewired/CalibrationMapSaveData.hpp"
#include "Rewired/zzzz__ControllerType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__CalibrationMapSaveData_def.hpp"
#include "Rewired/zzzz__CalibrationMap_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
//  Writing Method size for method: ::Rewired::CalibrationMapSaveData.get_map
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::CalibrationMap* (::Rewired::CalibrationMapSaveData::*)()>(&::Rewired::CalibrationMapSaveData::get_map)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMapSaveData*>(),
                        {"get_map", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMapSaveData.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::CalibrationMapSaveData::*)()>(&::Rewired::CalibrationMapSaveData::get_controllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMapSaveData*>(),
                        {"get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMapSaveData.get_hardwareIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::CalibrationMapSaveData::*)()>(&::Rewired::CalibrationMapSaveData::get_hardwareIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMapSaveData*>(),
                        {"get_hardwareIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::CalibrationMapSaveData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CalibrationMapSaveData::*)(::Rewired::CalibrationMap*, ::Rewired::ControllerType, ::StringW)>(&::Rewired::CalibrationMapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18177d7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::CalibrationMap*>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::CalibrationMap*& Rewired::CalibrationMapSaveData::__cordl_internal_get_IYUHhXzwUybwFIjYTTHmtuEWdpUT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IYUHhXzwUybwFIjYTTHmtuEWdpUT;
}
constexpr ::Rewired::CalibrationMap* const& Rewired::CalibrationMapSaveData::__cordl_internal_get_IYUHhXzwUybwFIjYTTHmtuEWdpUT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IYUHhXzwUybwFIjYTTHmtuEWdpUT;
}
constexpr void Rewired::CalibrationMapSaveData::__cordl_internal_set_IYUHhXzwUybwFIjYTTHmtuEWdpUT(::Rewired::CalibrationMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IYUHhXzwUybwFIjYTTHmtuEWdpUT = value;
}
constexpr ::Rewired::ControllerType& Rewired::CalibrationMapSaveData::__cordl_internal_get_EPqlmLUjsDHEUAYPEKNUhrCNSnFC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EPqlmLUjsDHEUAYPEKNUhrCNSnFC;
}
constexpr ::Rewired::ControllerType const& Rewired::CalibrationMapSaveData::__cordl_internal_get_EPqlmLUjsDHEUAYPEKNUhrCNSnFC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EPqlmLUjsDHEUAYPEKNUhrCNSnFC;
}
constexpr void Rewired::CalibrationMapSaveData::__cordl_internal_set_EPqlmLUjsDHEUAYPEKNUhrCNSnFC(::Rewired::ControllerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EPqlmLUjsDHEUAYPEKNUhrCNSnFC = value;
}
constexpr ::StringW& Rewired::CalibrationMapSaveData::__cordl_internal_get_SrCkmFCtsOxjunMymutgkiCVkQdY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SrCkmFCtsOxjunMymutgkiCVkQdY;
}
constexpr ::StringW const& Rewired::CalibrationMapSaveData::__cordl_internal_get_SrCkmFCtsOxjunMymutgkiCVkQdY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SrCkmFCtsOxjunMymutgkiCVkQdY;
}
constexpr void Rewired::CalibrationMapSaveData::__cordl_internal_set_SrCkmFCtsOxjunMymutgkiCVkQdY(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SrCkmFCtsOxjunMymutgkiCVkQdY = value;
}
inline ::Rewired::CalibrationMap* Rewired::CalibrationMapSaveData::get_map()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMapSaveData*>(),
                        {"get_map", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::CalibrationMap*>(this, ___internal_method);
}
inline ::Rewired::ControllerType Rewired::CalibrationMapSaveData::get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMapSaveData*>(),
                        {"get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(this, ___internal_method);
}
inline ::StringW Rewired::CalibrationMapSaveData::get_hardwareIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMapSaveData*>(),
                        {"get_hardwareIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::CalibrationMapSaveData::_ctor(::Rewired::CalibrationMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CalibrationMapSaveData*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::CalibrationMap*>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::CalibrationMapSaveData* Rewired::CalibrationMapSaveData::New_ctor(::Rewired::CalibrationMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::CalibrationMapSaveData*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
// Ctor Parameters []
constexpr ::Rewired::CalibrationMapSaveData::CalibrationMapSaveData()   {
}

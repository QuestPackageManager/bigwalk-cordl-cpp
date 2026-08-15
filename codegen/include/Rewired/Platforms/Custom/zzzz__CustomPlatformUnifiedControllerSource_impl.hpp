#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomPlatformUnifiedControllerSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformUnifiedControllerSource_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)(int32_t, int32_t)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18187f840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.mQuzpYCOIwiumhZwPvUuQePCqfjQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::mQuzpYCOIwiumhZwPvUuQePCqfjQ)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.get_axisCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::get_axisCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"get_axisCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.get_buttonCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::get_buttonCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"get_buttonCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.get_controllerExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::get_controllerExtension)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.OnInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::OnInitialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18187f210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.GetAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)(int32_t)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::GetAxisValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18187f270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"GetAxisValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.GetButtonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)(int32_t)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::GetButtonValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18187f2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"GetButtonValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.SetAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)(int32_t, float_t)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::SetAxisValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18187f410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"SetAxisValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.SetAxisValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)(::System::Collections::Generic::IList_1<float_t>*)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::SetAxisValues)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18187f440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"SetAxisValues", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.SetButtonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)(int32_t, bool)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::SetButtonValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18187f5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"SetButtonValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.SetButtonValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)(::System::Collections::Generic::IList_1<bool>*)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::SetButtonValues)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18187f630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"SetButtonValues", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.ucXAaEfHwEtUoQVGKRXCPlEZTcOWA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::ucXAaEfHwEtUoQVGKRXCPlEZTcOWA)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181163ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"ucXAaEfHwEtUoQVGKRXCPlEZTcOWA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.ljxxkoxqxzwlsaqyRgHxsxsZFoKJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::ljxxkoxqxzwlsaqyRgHxsxsZFoKJ)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181163a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"ljxxkoxqxzwlsaqyRgHxsxsZFoKJ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.MubFQkeLDvYigmYruZARIobnoHGeA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)(::Rewired::ControllerDataUpdater*)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::MubFQkeLDvYigmYruZARIobnoHGeA)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18187f2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"MubFQkeLDvYigmYruZARIobnoHGeA", {}, {::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.XABSrjOfFGnMKqeUzpurYlCfpOcJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::XABSrjOfFGnMKqeUzpurYlCfpOcJ)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18187f810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"XABSrjOfFGnMKqeUzpurYlCfpOcJ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)(bool)>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18187f260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::*)()>(&::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816db780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_get_MnTPCZAGtkqbwohNHAKMYgqGQTfg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MnTPCZAGtkqbwohNHAKMYgqGQTfg;
}
constexpr int32_t const& Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_get_MnTPCZAGtkqbwohNHAKMYgqGQTfg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MnTPCZAGtkqbwohNHAKMYgqGQTfg;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_set_MnTPCZAGtkqbwohNHAKMYgqGQTfg(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MnTPCZAGtkqbwohNHAKMYgqGQTfg = value;
}
constexpr int32_t& Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_get_FdzAKWfmmdOBDArOhkqdQAKIIhKtC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FdzAKWfmmdOBDArOhkqdQAKIIhKtC;
}
constexpr int32_t const& Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_get_FdzAKWfmmdOBDArOhkqdQAKIIhKtC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FdzAKWfmmdOBDArOhkqdQAKIIhKtC;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_set_FdzAKWfmmdOBDArOhkqdQAKIIhKtC(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FdzAKWfmmdOBDArOhkqdQAKIIhKtC = value;
}
constexpr ::ArrayW<bool>& Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_get_ZVeHoizqGjCgjbkCOAHXRNCzeSuJA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZVeHoizqGjCgjbkCOAHXRNCzeSuJA;
}
constexpr ::ArrayW<bool> const& Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_get_ZVeHoizqGjCgjbkCOAHXRNCzeSuJA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZVeHoizqGjCgjbkCOAHXRNCzeSuJA;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_set_ZVeHoizqGjCgjbkCOAHXRNCzeSuJA(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZVeHoizqGjCgjbkCOAHXRNCzeSuJA = value;
}
constexpr ::ArrayW<bool>& Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_get_grMkCDaDFdKDCMLdlbKNaLrOMovfA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grMkCDaDFdKDCMLdlbKNaLrOMovfA;
}
constexpr ::ArrayW<bool> const& Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_get_grMkCDaDFdKDCMLdlbKNaLrOMovfA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grMkCDaDFdKDCMLdlbKNaLrOMovfA;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_set_grMkCDaDFdKDCMLdlbKNaLrOMovfA(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grMkCDaDFdKDCMLdlbKNaLrOMovfA = value;
}
constexpr ::ArrayW<float_t>& Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_get_AojglTSNBBhNJclGVlxZftuMYKOK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AojglTSNBBhNJclGVlxZftuMYKOK;
}
constexpr ::ArrayW<float_t> const& Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_get_AojglTSNBBhNJclGVlxZftuMYKOK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AojglTSNBBhNJclGVlxZftuMYKOK;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_set_AojglTSNBBhNJclGVlxZftuMYKOK(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AojglTSNBBhNJclGVlxZftuMYKOK = value;
}
constexpr bool& Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_get_OoxuWBcepbZBNAjUJtPUFktZKQSE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OoxuWBcepbZBNAjUJtPUFktZKQSE;
}
constexpr bool const& Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_get_OoxuWBcepbZBNAjUJtPUFktZKQSE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OoxuWBcepbZBNAjUJtPUFktZKQSE;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::__cordl_internal_set_OoxuWBcepbZBNAjUJtPUFktZKQSE(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OoxuWBcepbZBNAjUJtPUFktZKQSE = value;
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::mQuzpYCOIwiumhZwPvUuQePCqfjQ()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::get_axisCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"get_axisCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::get_buttonCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"get_buttonCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::Controller_Extension* Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::get_controllerExtension()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::OnInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::GetAxisValue(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"GetAxisValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline bool Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::GetButtonValue(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"GetButtonValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::SetAxisValue(int32_t  index, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"SetAxisValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::SetAxisValues(::System::Collections::Generic::IList_1<float_t>*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"SetAxisValues", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::SetButtonValue(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"SetButtonValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::SetButtonValues(::System::Collections::Generic::IList_1<bool>*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"SetButtonValues", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::ucXAaEfHwEtUoQVGKRXCPlEZTcOWA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"ucXAaEfHwEtUoQVGKRXCPlEZTcOWA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::ljxxkoxqxzwlsaqyRgHxsxsZFoKJ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"ljxxkoxqxzwlsaqyRgHxsxsZFoKJ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::MubFQkeLDvYigmYruZARIobnoHGeA(::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"MubFQkeLDvYigmYruZARIobnoHGeA", {}, {::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::XABSrjOfFGnMKqeUzpurYlCfpOcJ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"XABSrjOfFGnMKqeUzpurYlCfpOcJ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource* Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource::CustomPlatformUnifiedControllerSource()   {
}

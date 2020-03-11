#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginProjectBMW : public WorldPlugin
  {
    public: WorldPluginProjectBMW() : WorldPlugin()
            {
              printf("Wellcome milekium's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginProjectBMW)
}

